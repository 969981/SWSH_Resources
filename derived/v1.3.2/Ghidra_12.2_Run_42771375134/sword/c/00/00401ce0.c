/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401ce0; name: FUN_00401ce0
 */


void FUN_00401ce0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  undefined8 local_38;
  
  if (param_2 != 0) {
    puVar6 = (uint *)(param_2 + -0x10);
    uVar1 = *puVar6;
    if (0x10 < uVar1) {
      plVar3 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x00401d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3,puVar6);
      return;
    }
    lVar4 = FUN_00400880();
    FUN_003ff570(*(undefined8 *)(lVar4 + 0x1c8));
                    /* try { // try from 00401d3c to 00401d53 has its CatchHandler @ 00401dac */
    lVar5 = FUN_00400880();
    uVar2 = uVar1 - 8;
    if (*(uint *)(lVar5 + 0x1c0) <= uVar2) {
      lVar5 = FUN_00400880();
      local_38 = 0;
                    /* try { // try from 00401d60 to 00401d67 has its CatchHandler @ 00401da4 */
      FUN_00401320(lVar5 + 0x1b8,uVar1 - 7,&local_38);
    }
                    /* try { // try from 00401d68 to 00401d7b has its CatchHandler @ 00401dac */
    lVar5 = FUN_00400880();
    *(undefined8 *)puVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x1b8) + (ulong)uVar2 * 8);
    lVar5 = FUN_00400880();
    *(uint **)(*(long *)(lVar5 + 0x1b8) + (ulong)uVar2 * 8) = puVar6;
                    /* try { // try from 00401d8c to 00401d8f has its CatchHandler @ 00401da8 */
    FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x1c8));
  }
  return;
}


