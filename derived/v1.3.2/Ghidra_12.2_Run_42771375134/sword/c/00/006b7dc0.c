/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b7dc0; name: FUN_006b7dc0
 */


void FUN_006b7dc0(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  code *pcVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [32];
  long local_60;
  undefined1 auStack_48 [8];
  
  param_2[0xf] = param_3;
  param_2[0x10] = param_4;
  if (param_2[1] != 0) {
    FUN_006b9170(auStack_48,param_2);
    FUN_006b96c0(auStack_80,auStack_48,param_2 + 2,param_2[6]);
    pcVar1 = *(code **)param_2[1];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)((undefined8 *)param_2[1] + 4,auStack_80);
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    piVar2 = (int *)*param_2;
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x15) ||
       ((uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10], uVar4 == 0 ||
        (*(int *)((long)piVar2 + uVar4) == 0)))) {
      uVar4 = FUN_006b47f0(param_2 + 0x18);
      if ((uVar4 & 1) != 0) {
        uVar4 = FUN_006b4930(param_2 + 0x18);
        fVar7 = (float)uVar4;
        goto joined_r0x006b7eb8;
      }
      piVar2 = (int *)*param_2;
      uVar4 = 0;
      if ((0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar5 != 0)) {
        fVar7 = *(float *)((long)piVar2 + uVar5);
        uVar4 = (ulong)(uint)fVar7;
        goto joined_r0x006b7eb8;
      }
    }
    else {
      uVar4 = FUN_006b6610(param_2[0xf]);
      fVar7 = (float)uVar4;
joined_r0x006b7eb8:
      if (1.0 <= fVar7) {
        uVar4 = (ulong)(uint)((float)uVar4 - (float)(int)(float)uVar4);
      }
    }
    if (param_3 == param_4) goto LAB_006b8058;
    FUN_006b6e70(uVar4,param_1,param_2[0x10]);
    uVar4 = FUN_006b6510(param_3);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_006b47f0(param_2 + 0x15);
      if ((uVar4 & 1) == 0) {
        piVar2 = (int *)*param_2;
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
           (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar4 == 0))
        goto LAB_006b8054;
        fVar7 = *(float *)((long)piVar2 + uVar4);
      }
      else {
        fVar7 = (float)FUN_006b4930(param_2 + 0x15);
      }
      if (fVar7 != 0.0) {
        FUN_006b6f40(0x3f800000,param_2[0xf]);
        FUN_006b6f40(0,param_2[0x10]);
        *(undefined4 *)(param_2 + 0x11) = 0;
        uVar8 = FUN_006b7c50(param_1,param_2);
        if ((float)uVar8 < 1.0) {
          FUN_006b6f40(1.0 - (float)uVar8,param_2[0xf]);
          FUN_006b6f40(uVar8,param_2[0x10]);
          FUN_006b6b50(param_1,param_2[0x10]);
          return;
        }
      }
    }
    else {
      piVar2 = (int *)*param_2;
      if (((0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
          (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar4 != 0)) &&
         (*(int *)((long)piVar2 + uVar4) == 2)) {
        uVar4 = FUN_006b47f0(param_2 + 0x15);
        if ((uVar4 & 1) == 0) {
          piVar2 = (int *)*param_2;
          uVar6 = 0;
          if ((10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar4 != 0)) {
            uVar6 = *(undefined4 *)((long)piVar2 + uVar4);
          }
          lVar3 = *(long *)(param_3 + 0x88);
        }
        else {
          uVar6 = FUN_006b4930(param_2 + 0x15);
          lVar3 = *(long *)(param_3 + 0x88);
        }
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x128) = uVar6;
        }
      }
    }
  }
LAB_006b8054:
  uVar4 = 0xbf800000;
LAB_006b8058:
  FUN_006b8090(param_1,uVar4,param_2);
  return;
}


