/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054c9d0; name: FUN_0054c9d0
 */


ulong FUN_0054c9d0(long param_1,undefined8 param_2,long param_3,uint param_4,long *param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (((((*param_5 == 0) || (param_5[1] == 0)) || (param_5[2] == 0)) ||
      (((*param_5 == DAT_0275e808 && (param_5[1] == DAT_0275e810)) && (param_5[2] == DAT_0275e818)))
      ) && (lVar4 = *(long *)(param_1 + 0x310), *(long *)(param_1 + 0x318) != lVar4)) {
    uVar5 = *(undefined8 *)(param_3 + 8);
    uVar6 = 0;
    do {
      iVar2 = FUN_00552890(*(long *)(lVar4 + uVar6 * 8) + 0x20,uVar5);
      if (iVar2 != 0) {
        if (-1 < (int)uVar6) {
          return uVar6;
        }
        break;
      }
      lVar4 = *(long *)(param_1 + 0x310);
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(*(long *)(param_1 + 0x318) - lVar4 >> 3));
  }
  local_b8 = 0;
  FUN_00550fe0(auStack_b0,&DAT_01d38550);
  local_a0 = 0;
  local_90 = 0;
  FUN_00550f60(auStack_98);
  FUN_00551860(auStack_98,&DAT_01d38550);
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_78 = 0;
  local_70 = (ulong)param_4;
  local_88 = 0;
  local_80 = 0;
  FUN_00551670(auStack_b0,param_2);
  FUN_00551670(auStack_98,param_3);
  local_88 = *param_5;
  local_80 = param_5[1];
  local_78 = param_5[2];
  if ((((local_88 == 0) || (local_80 == 0)) || (local_78 == 0)) &&
     ((iVar2 = FUN_0054c420(param_1,&local_b8), iVar2 < 0 && (iVar2 != -4)))) {
    uVar6 = 0xffffffff;
  }
  else {
    plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,200,
                                  "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",
                                  0x15d2,0);
    *plVar3 = param_1;
    FUN_00550fe0(plVar3 + 1,&DAT_01d38550);
    plVar1 = plVar3 + 4;
    *(undefined1 *)(plVar3 + 3) = 0;
    plVar3[5] = 0;
    FUN_00550f60(plVar1);
    FUN_00551860(plVar1,&DAT_01d38550);
    *(undefined4 *)(plVar3 + 10) = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    *(undefined1 *)(plVar3 + 0x18) = 0;
    *(undefined1 *)(plVar3 + 0xd) = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = 0;
    FUN_00551860(plVar3 + 1,local_a8);
    FUN_00551670(plVar1,auStack_98);
    plVar3[6] = local_88;
    plVar3[7] = local_80;
    plVar3[8] = local_78;
    *(undefined4 *)(plVar3 + 9) = (undefined4)local_70;
    local_c0 = plVar3;
    if (*(undefined8 **)(param_1 + 0x318) == *(undefined8 **)(param_1 + 800)) {
      FUN_00550720((long *)(param_1 + 0x310),&local_c0);
      lVar4 = *(long *)(param_1 + 0x318);
    }
    else {
      **(undefined8 **)(param_1 + 0x318) = plVar3;
      lVar4 = *(long *)(param_1 + 0x318) + 8;
      *(long *)(param_1 + 0x318) = lVar4;
    }
    uVar6 = (ulong)((int)((ulong)(lVar4 - *(long *)(param_1 + 0x310)) >> 3) - 1);
  }
  FUN_00551380(auStack_98);
  FUN_00551380(auStack_b0);
  return uVar6;
}


