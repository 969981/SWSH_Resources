/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb990; name: FUN_008fb990
 */


void FUN_008fb990(long param_1,undefined4 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 0x184) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x174);
    uVar2 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),(ulong)bVar1);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + (ulong)bVar1 * 8 + 0x198) != 0) {
        uVar3 = FUN_008fe510();
        FUN_009c94e0(uVar3,0,param_2);
        FUN_009c95b0(uVar3,0,1);
        FUN_009c95b0(uVar3,1,1);
        FUN_009c95b0(uVar3,2,1);
      }
    }
    plVar4 = *(long **)(param_1 + 0x90);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008fba40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xa38))(plVar4,1);
      return;
    }
  }
  return;
}


