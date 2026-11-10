/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00823410; name: FUN_00823410
 */


void FUN_00823410(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  FUN_00822b50(&local_68);
  if (local_68 != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = local_68;
    param_1[1] = local_60;
    param_1[2] = local_58;
    param_1[3] = local_50;
    return;
  }
  uVar1 = param_2[1];
  uVar6 = *param_2 + 1;
  uVar5 = uVar1 * 3 >> 2 & 0xfffffffffffffff;
  if (uVar6 < uVar5) {
    if ((8 < uVar1) && (uVar6 <= (uVar1 * 3 & 0x3fffffffffffffff) >> 4)) {
      uVar7 = 0;
      do {
        uVar7 = uVar7 + 1;
      } while ((uVar6 * 5 >> 2) + 1 << (uVar7 & 0x3f) < uVar5);
      uVar6 = uVar1 >> (uVar7 & 0x3f);
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      if (uVar6 != uVar1) goto LAB_008234f4;
    }
  }
  else if (uVar1 < 0x800000000000001) {
    uVar6 = uVar1 << 1;
LAB_008234f4:
    FUN_008236c0(param_2,uVar6);
    FUN_00822b50(&local_90,param_2,param_3);
    lVar3 = param_2[5];
    local_68 = local_90;
    uVar2 = local_70;
    goto joined_r0x0082352c;
  }
  lVar3 = param_2[5];
  local_68 = 0;
  uVar2 = local_48;
joined_r0x0082352c:
  if (lVar3 == 0) {
    pvVar4 = malloc(0x20);
  }
  else {
    pvVar4 = (void *)FUN_0080efb0(lVar3,0,0x20);
  }
  *(undefined4 *)((long)pvVar4 + 8) = 0;
  FUN_0081ec70(pvVar4,param_3);
  *(undefined8 *)((long)pvVar4 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  FUN_008235a0(&local_90,param_2,uVar2,pvVar4);
  *param_2 = *param_2 + 1;
  param_1[2] = local_80;
  param_1[3] = lStack_78;
  *param_1 = local_90;
  param_1[1] = lStack_88;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


