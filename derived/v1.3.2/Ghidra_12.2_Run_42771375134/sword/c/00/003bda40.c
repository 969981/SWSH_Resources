/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bda40; name: FUN_003bda40
 */


void FUN_003bda40(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 3) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 4) = param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = param_2[5];
  lVar2 = *param_1;
  *(undefined4 *)(param_1 + 5) = param_2[6];
  if (lVar2 == 0) {
    return;
  }
  FUN_003bfa30(lVar2);
  plVar1 = *(long **)(*(long *)(lVar2 + 0x48) + 0x760);
                    /* WARNING: Could not recover jumptable at 0x003bdab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x60,*(uint *)(lVar2 + 0xb0) >> 6);
  return;
}


