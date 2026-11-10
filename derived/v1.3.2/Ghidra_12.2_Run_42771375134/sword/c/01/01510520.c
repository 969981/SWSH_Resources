/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01510520; name: FUN_01510520
 */


void FUN_01510520(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong local_58;
  undefined4 local_48;
  undefined4 local_44;
  
  local_58 = local_58 & 0xffffffff00000000;
  local_44 = param_3;
  uVar5 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_58);
  if ((*(long *)(param_2 + 8) != 0) &&
     (lVar6 = FUN_006e72a0(), puVar3 = PTR_DAT_02710920, lVar6 != 0)) {
    lVar8 = 0;
    do {
      FUN_01511640(&local_58,param_2,lVar8);
      uVar4 = local_44;
      puVar1 = puVar3;
      if (local_58 != 0) {
        puVar1 = (undefined *)(local_58 + 0x58);
      }
      puVar7 = (undefined4 *)FUN_015143b0(param_4,puVar1);
      *puVar7 = uVar4;
      puVar2 = (undefined8 *)puVar3;
      if (local_58 != 0) {
        puVar2 = (undefined8 *)(local_58 + 0x58);
      }
      local_48 = (undefined4)*puVar2;
      FUN_01514650(uVar5,&local_48,&local_44);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
  }
  return;
}


