/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fff50; name: FUN_007fff50
 */


void FUN_007fff50(ulong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar3;
  undefined1 *puVar2;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_50 [32];
  
  puVar1 = (undefined1 *)FUN_007ffa90(param_2,auStack_50);
  uVar7 = (long)puVar1 - (long)auStack_50;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    puVar5 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar7 << 1);
  }
  else {
    uVar6 = uVar7 + 0x10 & 0xfffffffffffffff0;
    puVar5 = operator_new(uVar6);
    param_1[1] = uVar7;
    param_1[2] = (ulong)puVar5;
    *param_1 = uVar6 | 1;
  }
  if (auStack_50 != puVar1) {
    puVar3 = auStack_50;
    puVar4 = puVar5;
    do {
      puVar2 = puVar3 + 1;
      *puVar4 = *puVar3;
      puVar3 = puVar2;
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar2);
    puVar5 = puVar5 + uVar7;
  }
  *puVar5 = 0;
  return;
}


