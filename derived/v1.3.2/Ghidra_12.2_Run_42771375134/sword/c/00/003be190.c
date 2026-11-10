/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be190; name: FUN_003be190
 */


void FUN_003be190(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[0x16];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x1f) == '\x01')) {
    *(undefined4 *)(lVar2 + 0x20) = *param_2;
    *(undefined4 *)(lVar2 + 0x24) = param_2[1];
    *(undefined4 *)(lVar2 + 0x28) = param_2[2];
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)((long)param_1 + 0x84) = param_2[1];
  *(undefined4 *)(param_1 + 0x11) = param_2[2];
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x48) + 0x760);
                    /* WARNING: Could not recover jumptable at 0x003be1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x60,*(uint *)(lVar2 + 0xb0) >> 6);
  return;
}


