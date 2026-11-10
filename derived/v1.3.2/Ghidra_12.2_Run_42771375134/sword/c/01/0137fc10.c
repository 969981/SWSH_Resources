/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137fc10; name: FUN_0137fc10
 */


void FUN_0137fc10(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  FUN_00794700(*(undefined8 *)(param_1 + (long)param_2 * 8 + 0x80));
  if (param_2 == 3) {
    FUN_00794700(*(undefined8 *)(param_1 + 0xa8));
    lVar6 = *(long *)(param_1 + 0x68);
  }
  else {
    if (param_2 == 4) {
      uVar3 = FUN_00794780(*(undefined8 *)(param_1 + 0xa8));
      FUN_0137f6f0(DAT_01d4bdf0,DAT_01d4c4d4,param_1,uVar3);
    }
    lVar6 = *(long *)(param_1 + 0x68);
  }
  if ((lVar6 == 0) || (puVar7 = *(undefined8 **)(lVar6 + 0x60), puVar7 == (undefined8 *)0x0)) {
    lVar6 = FUN_01380080(0,&local_50);
  }
  else {
    puVar4 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar3 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar3;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar4 == (undefined8 *)PTR_DAT_02715080) {
          puVar5 = puVar7 + -10;
          goto LAB_0137fce4;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      puVar5 = (undefined8 *)0x0;
    }
LAB_0137fce4:
    lVar6 = FUN_01380080(puVar5,&local_50);
  }
  if (lVar6 != 0) {
    uVar8 = *(uint *)(&DAT_0216c58c + (long)param_2 * 4);
    puVar7 = (undefined8 *)FUN_012dc700(param_1);
    *(undefined4 *)(lVar6 + 0x84) = 0x19;
    uVar3 = *puVar7;
    uVar1 = puVar7[1];
    *(undefined8 *)(lVar6 + 0xb0) = 0x3f80000000000000;
    *(undefined8 *)(lVar6 + 0x90) = uVar3;
    *(undefined8 *)(lVar6 + 0x98) = uVar1;
    *(ulong *)(lVar6 + 0xa8) = (ulong)uVar8;
    *(ulong *)(lVar6 + 0xa0) = CONCAT44(uVar8,uVar8);
    *(undefined1 *)(lVar6 + 0x80) = 1;
  }
  if (param_2 == 4) {
    local_50 = 0x69285afbea1fe223;
    local_48 = "Stop_Camp_Cooking_BurnUpSmoke_lp";
    local_40 = 0x20;
  }
  else if (param_2 == 2) {
    local_50 = 0xbe88bd37f9cd8800;
    local_48 = "Stop_Camp_Cooking_BonSizzle_lp";
    local_40 = 0x1e;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    local_50 = 0x4c40222c4da0ed9a;
    local_48 = "Stop_Camp_Cooking_Fire_lp";
    local_40 = 0x19;
  }
  local_38 = 0;
  FUN_012d6d40(&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


