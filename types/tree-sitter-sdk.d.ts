// Author: Luma<world@luma.email>
// License: Dual-licensed under MIT(see repository top) and UNLINCENSE(https://unlicense.org/)
/*
This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>
*/

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
