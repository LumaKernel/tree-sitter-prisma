declare type ExtraRuleNames = never;

declare class RuleSymbol {}
declare type Rule = string | RegExp | RuleSymbol;

declare function grammar<RuleNames extends string>(
  def: {
    name: string;
    // TODO: no idea for this
    extras?: ($: Record<RuleNames | ExtraRuleNames, RuleSymbol>) => Rule[];
    word?: ($: Record<RuleNames | ExtraRuleNames, RuleSymbol>) => Rule;
    conflicts?: ($: Record<RuleNames | ExtraRuleNames, RuleSymbol>) => Rule[][];
    supertypes?: ($: Record<RuleNames | ExtraRuleNames, RuleSymbol>) => Rule[];
    inline?: ($: Record<RuleNames | ExtraRuleNames, RuleSymbol>) => Rule[];
    rules: Record<
      RuleNames,
      ($: Record<RuleNames | ExtraRuleNames, RuleSymbol>) => Rule
    >;
  } & (ExtraRuleNames extends never
    ? unknown
    : {
        externals: ($: Record<ExtraRuleNames, RuleSymbol>) => Rule[];
      })
): unknown;

declare function repeat(rule: Rule): RuleSymbol;
declare function repeat1(rule: Rule): RuleSymbol;
declare function seq(...rules: Rule[]): RuleSymbol;
declare function choice(...rule: Rule[]): RuleSymbol;
declare function optional(rule: Rule): RuleSymbol;
declare function token(rule: Rule): RuleSymbol;
declare type prec = {
  (p: number, rule: Rule): RuleSymbol;
  left(p: number, rule: Rule): RuleSymbol;
  left(rule: Rule): RuleSymbol;
  right(p: number, rule: Rule): RuleSymbol;
  right(rule: Rule): RuleSymbol;
  dynamic(p: number, rule: Rule): RuleSymbol;
};
declare function field(name: string, rule: Rule): RuleSymbol;
declare function alias(rule: Rule, name: Rule): RuleSymbol;
