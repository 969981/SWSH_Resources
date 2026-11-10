/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b7cc0; name: FUN_007b7cc0
 */


void FUN_007b7cc0(long *param_1)

{
  size_t sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *__dest;
  long *__dest_00;
  undefined8 uVar5;
  char local_70 [24];
  uint local_58 [6];
  
  if (param_1[0x13] != 0) {
    __dest = (undefined8 *)param_1[0x12];
    iVar2 = (**(code **)(*(long *)*__dest + 8))();
    if (iVar2 == 3) {
LAB_007b7e50:
      FUN_007b7f20(param_1);
      *(undefined1 *)((long)param_1 + 0x4f2) = 1;
    }
    else if (iVar2 == 1) {
      lVar4 = param_1[0x13];
      sVar1 = (param_1[0x12] + lVar4 * 8) - (long)(__dest + 1);
      if (sVar1 != 0) {
        memmove(__dest,__dest + 1,sVar1);
        lVar4 = param_1[0x13];
      }
      param_1[0x13] = lVar4 + -1;
      if (lVar4 + -1 != 0) {
        do {
          __dest_00 = (long *)param_1[0x12];
          *(undefined1 *)((long)param_1 + 0x4f6) = 0;
          *(undefined4 *)((long)param_1 + 0x4f1) = 0;
          *(long **)(*__dest_00 + 8) = param_1;
          uVar3 = (**(code **)(*(long *)*__dest_00 + 0x20))();
          if ((uVar3 & 1) == 0) {
            uVar3 = (*(code *)**(undefined8 **)*__dest_00)();
            if ((uVar3 & 1) == 0) {
              param_1[0x13] = 0;
              goto LAB_007b7e50;
            }
            break;
          }
          lVar4 = param_1[0x13];
          sVar1 = (param_1[0x12] + lVar4 * 8) - (long)(__dest_00 + 1);
          if (sVar1 != 0) {
            memmove(__dest_00,__dest_00 + 1,sVar1);
            lVar4 = param_1[0x13];
          }
          param_1[0x13] = lVar4 + -1;
        } while (lVar4 + -1 != 0);
      }
    }
    goto LAB_007b7e60;
  }
  if (((*(long *)PTR_DAT_02716a30 != 0) && (*(long *)PTR_DAT_027104b0 != 0)) &&
     (*(char *)(*(long *)PTR_DAT_027104b0 + 0x218) != '\0')) {
    FUN_019416b0(local_58);
    local_70[0] = '\0';
    if (local_58[0] == 0) goto LAB_007b7e60;
    FUN_018724d0((ulong)local_70 | 4,local_58);
    local_70[0] = '\x01';
    *(undefined1 *)((long)param_1 + 0x4f3) = 1;
    uVar5 = *(undefined8 *)PTR_DAT_027104a0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_018724d0((ulong)local_58 | 4,(ulong)local_70 | 4);
    local_58[0] = CONCAT31(local_58[0]._1_3_,1);
    FUN_007a8040(uVar5,local_58);
    if ((char)local_58[0] != '\0') {
      local_58[0] = local_58[0] & 0xffffff00;
    }
    if (local_70[0] == '\0') goto LAB_007b7e60;
  }
  local_70[0] = '\0';
LAB_007b7e60:
  uVar3 = (**(code **)(*param_1 + 0x98))(param_1);
  if ((uVar3 & 1) != 0) {
    param_1[0x13] = 0;
  }
  uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
  if ((uVar3 & 1) != 0) {
    param_1[0x13] = 0;
  }
  if ((char)param_1[0x81] != '\0') {
    nn::os::GetSystemTick();
    lVar4 = nn::os::ConvertToTimeSpan();
    param_1[0x83] = lVar4 - param_1[0x82];
    if ((double)param_1[0x84] < (double)(lVar4 - param_1[0x82]) / DAT_01cd50a0) {
      if ((char)param_1[0x81] != '\0') {
        *(undefined1 *)(param_1 + 0x81) = 0;
      }
      param_1[0x84] = 0;
      if ((param_1[0x13] != 0) &&
         (uVar3 = (**(code **)(*param_1 + 0x20))(param_1,1), (uVar3 & 1) == 0)) {
        *(undefined1 *)((long)param_1 + 0x4f2) = 1;
      }
    }
  }
  return;
}


