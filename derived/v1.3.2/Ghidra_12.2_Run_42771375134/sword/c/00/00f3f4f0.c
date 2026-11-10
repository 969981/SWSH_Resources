/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3f4f0; name: FUN_00f3f4f0
 */


void FUN_00f3f4f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  long local_48;
  char *pcStack_40;
  undefined8 local_38;
  long local_30;
  undefined4 local_24;
  
  if ((*(char *)(param_1 + 0x755) != '\0') &&
     (*(char *)(*(long *)(param_1 + 0x1b0) + 0x568) != '\0')) {
    uVar1 = *(int *)(param_1 + 0x528) + 1;
    *(uint *)(param_1 + 0x528) = uVar1;
    if (uVar1 < *(uint *)(*(long *)(param_1 + 0x508) + 0x28)) {
      plVar3 = *(long **)(*(long *)(param_1 + 0x508) + 0x20);
      if ((int)uVar1 < 0) {
        lVar4 = (long)(int)uVar1 + -1;
        do {
          plVar3 = (long *)*plVar3;
          lVar4 = lVar4 + 1;
        } while (lVar4 < -1);
      }
      else if (uVar1 != 0) {
        lVar4 = (long)(int)uVar1 + 1;
        do {
          plVar3 = (long *)plVar3[1];
          lVar4 = lVar4 + -1;
        } while (1 < lVar4);
      }
      lVar4 = plVar3[2];
    }
    else {
      lVar4 = 0;
    }
    FUN_00f3d1b0(param_1 + 0x110,lVar4);
    FUN_00f3f7d0(*(undefined8 *)(param_1 + 0x1b0),lVar4 != 0);
    *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(param_1 + 0x528);
    if (lVar4 == 0) {
      lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_24 = 2;
      FUN_00f2ec40(&local_48,lVar4,&local_24);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (*(long *)(param_1 + 0x318) != 0) {
        local_48 = -0x3c79d5a5a4a0c505;
        FUN_0167bb70(*(long *)(param_1 + 0x318),&local_48);
        if (*(long *)(param_1 + 0x318) != 0) {
          local_48 = -0x3c79d6a5a4a0c6b8;
          FUN_0167ba30(*(long *)(param_1 + 0x318),&local_48);
        }
      }
      *(undefined1 *)(param_1 + 0x755) = 0;
      fVar5 = *(float *)(param_1 + 0x750);
      if (*(int *)(param_1 + 0x528) != *(int *)(*(long *)(param_1 + 0x508) + 0x28)) {
        fVar5 = 0.0;
      }
      *(int *)(param_1 + 0x758) =
           (int)((*(float *)(*(long *)(param_1 + 0x508) + 0x4c) * *(float *)(param_1 + 0x4f8) +
                 *(float *)(param_1 + 0x4fc)) * fVar5 * *(float *)(param_1 + 0x500));
      return;
    }
    local_48 = 0xf19b4c425464033;
    pcStack_40 = "Play_UI_Lcircuit_CheckPoint";
    local_38 = 0x1b;
    local_30 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_48);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    lVar4 = *(long *)PTR_DAT_02710840;
    uVar2 = FUN_010247a0(lVar4 + 0x390,PTR_DAT_02720988);
    FUN_01023770(lVar4 + 0x390,uVar2,0);
    FUN_00f3f9e0(0x41700000,param_1 + 0x408);
    fVar6 = *(float *)(param_1 + 0x750);
    fVar5 = fVar6 + *(float *)(param_1 + 0x458);
    *(float *)(param_1 + 0x750) = fVar5;
    if (((fVar6 <= *(float *)(param_1 + 0x4dc)) && (*(float *)(param_1 + 0x4dc) < fVar5)) &&
       (*(long *)(param_1 + 0x318) != 0)) {
      local_48 = -0x3c79d5a5a4a0c505;
      FUN_0167bb70(*(long *)(param_1 + 0x318),&local_48);
      if (*(long *)(param_1 + 0x318) != 0) {
        local_48 = -0x3c79d6a5a4a0c6b8;
        FUN_0167ba30(*(long *)(param_1 + 0x318),&local_48);
      }
    }
    *(float *)(param_1 + 0x768) = *(float *)(param_1 + 0x4d0) + *(float *)(param_1 + 0x768);
  }
  return;
}


