/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f4010; name: FUN_007f4010
 */


void FUN_007f4010(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_e0;
  undefined4 local_d8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 auStack_a4 [36];
  byte local_80 [16];
  void *local_70;
  
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_007f46e0(param_1,*(long *)(param_2 + 0x30) + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x30) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x90;
    } while (lVar5 < *(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_007f4010(param_1,*(long *)(param_2 + 0x50) + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x60) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0xa8;
    } while (lVar5 < *(int *)(param_2 + 0x48));
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_007f42b0(param_1,*(long *)(param_2 + 0x60) + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x78) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x38;
    } while (lVar5 < *(int *)(param_2 + 0x58));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_007f46e0(param_1,*(long *)(param_2 + 0x80) + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x48) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x90;
    } while (lVar5 < *(int *)(param_2 + 0x78));
  }
  lVar5 = 0x1fffffff;
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x50) != '\0') {
    lVar5 = 0x7fffffff;
  }
  iVar3 = *(int *)(param_2 + 0x68);
  if (0 < iVar3) {
    lVar4 = 4;
    lVar8 = 1;
    do {
      if (lVar5 + 1 < (long)*(int *)(*(long *)(param_2 + 0x70) + lVar4)) {
        uVar6 = *(undefined8 *)(param_2 + 8);
        uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x90) + lVar8 * 8);
        local_b0 = (char *)FUN_007ff700(lVar5,auStack_a4);
        sVar2 = strlen(local_b0);
        local_a8 = (undefined4)sVar2;
        local_e0 = 0;
        local_d8 = 0xffffffff;
        local_110 = 0;
        local_108 = 0xffffffff;
        local_140 = 0;
        local_138 = 0xffffffff;
        local_170 = 0;
        local_168 = 0xffffffff;
        local_1a0 = 0;
        local_198 = 0xffffffff;
        local_1d0 = 0;
        local_1c8 = 0xffffffff;
        local_200 = 0;
        local_1f8 = 0xffffffff;
        local_230 = 0;
        local_228 = 0xffffffff;
        local_260 = 0;
        local_258 = 0xffffffff;
        FUN_00863000(local_80,"Extension numbers cannot be greater than $0.",&local_b0,&local_e0,
                     &local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,&local_230,
                     &local_260);
        FUN_007eaaf0(param_1,uVar6,uVar7,1,local_80);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        iVar3 = *(int *)(param_2 + 0x68);
      }
      lVar4 = lVar4 + 8;
      bVar1 = lVar8 < iVar3;
      lVar8 = lVar8 + 1;
    } while (bVar1);
  }
  return;
}


