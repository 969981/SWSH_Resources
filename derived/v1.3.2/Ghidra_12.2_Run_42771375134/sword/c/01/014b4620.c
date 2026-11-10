/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b4620; name: FUN_014b4620
 */


void FUN_014b4620(undefined4 *param_1,long param_2,byte param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  *(undefined2 *)((long)param_1 + 5) = 0;
  *param_1 = 0;
  *(byte *)((long)param_1 + 9) = param_3 & 1;
  puVar1 = PTR_DAT_02710798;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x1e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_01524c20(lVar4,param_1 + 4);
  uVar2 = FUN_0102b620();
  if (uVar2 < 2) {
    *(undefined1 *)((long)param_1 + 5) = 1;
  }
  else if (uVar2 - 3 < 2) {
    *(undefined1 *)((long)param_1 + 6) = 1;
  }
  else if (uVar2 == 2) {
    *(undefined1 *)((long)param_1 + 5) = 1;
    *(undefined1 *)((long)param_1 + 7) = 1;
  }
  if ((param_4 & 0xfffffffe) == 2) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014b4720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


