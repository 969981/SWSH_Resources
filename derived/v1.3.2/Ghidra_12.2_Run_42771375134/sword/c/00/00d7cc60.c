/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7cc60; name: FUN_00d7cc60
 */


void FUN_00d7cc60(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x5d8) == 2) {
    uVar1 = FUN_00d705e0(param_1 + 0x5dc);
    local_28 = CONCAT71(local_28._1_7_,uVar1);
    lVar2 = FUN_00d70870(&local_28);
    local_28 = *(undefined8 *)(lVar2 + 0x18);
    if ((*(long *)(param_1 + 0x2b0) == 0) ||
       (uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28), (uVar3 & 1) != 0)) {
      uVar1 = FUN_00d705e0(param_1 + 0x5e0);
      local_28 = CONCAT71(local_28._1_7_,uVar1);
      lVar2 = FUN_00d70870(&local_28);
      local_28 = *(undefined8 *)(lVar2 + 0x10);
      if ((*(long *)(param_1 + 0x2b0) == 0) ||
         (uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28), (uVar3 & 1) != 0)) {
        FUN_00d7cd30(param_1,param_1 + 0x5e0);
        local_28 = CONCAT71(local_28._1_7_,1);
        FUN_00d7d400(param_1,&local_28);
        if (*(long *)(param_1 + 0x4c0) != 0) {
          FUN_016d2080();
        }
        *(undefined4 *)(param_1 + 0x5d8) = 1;
      }
    }
  }
  return;
}


