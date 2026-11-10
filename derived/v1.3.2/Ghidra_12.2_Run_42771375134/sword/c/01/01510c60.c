/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01510c60; name: FUN_01510c60
 */


void FUN_01510c60(undefined8 param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined1 local_54 [4];
  undefined4 local_50 [2];
  ulong local_48;
  
  local_48 = local_48 & 0xffffffff00000000;
  uVar3 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_48);
  if ((*(long *)(param_2 + 8) != 0) &&
     (lVar4 = FUN_006e72a0(), puVar2 = PTR_DAT_02710920, lVar4 != 0)) {
    lVar9 = 0;
    do {
      FUN_01511640(&local_48,param_2,lVar9);
      puVar1 = (ulong *)puVar2;
      if (local_48 != 0) {
        puVar1 = (ulong *)(local_48 + 0x58);
      }
      uVar5 = *puVar1;
      local_50[0] = (undefined4)uVar5;
      uVar6 = param_3[1];
      if ((uVar6 - 1 & uVar6) == 0) {
        plVar7 = *(long **)(*param_3 + (uVar6 - 1 & uVar5) * 8);
        do {
          do {
            plVar7 = (long *)*plVar7;
          } while (plVar7[1] != uVar5);
        } while (plVar7[2] != uVar5);
      }
      else {
        uVar8 = uVar5;
        if (uVar6 <= uVar5) {
          uVar8 = 0;
          if (uVar6 != 0) {
            uVar8 = uVar5 / uVar6;
          }
          uVar8 = uVar5 - uVar8 * uVar6;
        }
        plVar7 = *(long **)(*param_3 + uVar8 * 8);
        do {
          do {
            plVar7 = (long *)*plVar7;
          } while (plVar7[1] != uVar5);
        } while (plVar7[2] != uVar5);
      }
      local_54[0] = *(undefined1 *)((long)plVar7 + 0x18);
      FUN_01515e40(uVar3,local_50,local_54);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar4);
  }
  return;
}


