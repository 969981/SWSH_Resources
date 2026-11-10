/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe98c0; name: FUN_00fe98c0
 */


void FUN_00fe98c0(long *param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  long local_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x38;
  lVar3 = lVar2 + 0x28;
  if (param_2 == 0) {
    lVar1 = lVar2 + 0x30;
    lVar3 = lVar2 + 0x20;
  }
  if (*(char *)(param_1[1] + 0x11) == '\0') {
    if (param_3 == 0) {
      if (*(long *)(param_1[1] + 8) == 0) goto LAB_00fe9900;
      FUN_014c9030(*(undefined8 *)param_1[2],0);
    }
    else {
      FUN_014c8930(*(undefined8 *)param_1[2],0,param_3);
    }
    FUN_0077eb10(*(undefined8 *)(lVar2 + 0x18),&DAT_021623f0,*(undefined8 *)param_1[3]);
    FUN_0167cce0(*(undefined8 *)param_1[4],lVar3,10);
    lVar3 = param_1[5];
    uVar7 = 0;
    if (*(uint *)PTR_DAT_027232c0 != 0) {
      uVar4 = 0;
      puVar5 = (undefined4 *)(*(long *)PTR_PTR_027232c8 + 8);
      do {
        if (puVar5[-2] == param_3) {
          uVar7 = *puVar5;
          goto LAB_00fe9960;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 3;
      } while (uVar4 < *(uint *)PTR_DAT_027232c0);
    }
  }
  else {
LAB_00fe9900:
    lVar6 = param_1[5];
    local_38 = *(long *)(lVar2 + 0x18);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar6,lVar3,&local_38,&DAT_021623f8,10);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar3 = param_1[5];
    uVar7 = *(undefined4 *)PTR_DAT_027232b8;
LAB_00fe9960:
    uVar7 = NEON_ucvtf(uVar7);
  }
  FUN_00ffd510(uVar7,lVar3,lVar1);
  FUN_00ffd510((float)(*(byte *)(param_1[1] + 0x10) ^ 1),param_1[5],lVar2 + 0x40);
  return;
}


