/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529a50; name: FUN_00529a50
 */


undefined8 FUN_00529a50(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  iVar2 = *(int *)(param_1 + 0xb7c);
  if (iVar2 == -1) {
    if (((((*(float *)(param_1 + 0xb84) == DAT_0275cd8c) &&
          (*(float *)(param_1 + 0xb88) == DAT_0275cd90)) &&
         (*(float *)(param_1 + 0xb8c) == DAT_0275cd94)) &&
        ((*(float *)(param_1 + 0xb90) == DAT_0275cd98 &&
         (*(float *)(param_1 + 0xb94) == DAT_0275cd9c)))) &&
       ((*(float *)(param_1 + 0xb98) == DAT_0275cda0 &&
        ((*(float *)(param_1 + 0xb9c) == DAT_0275cda4 &&
         (*(float *)(param_1 + 0xba0) == DAT_0275cda8)))))) {
      FUN_00511040(&local_40,0);
      *(undefined8 *)(param_1 + 0xb94) = local_30;
      *(undefined8 *)(param_1 + 0xb9c) = uStack_28;
      *(undefined8 *)(param_1 + 0xb84) = local_40;
      *(undefined8 *)(param_1 + 0xb8c) = uStack_38;
      iVar2 = *(int *)(param_1 + 0xb80);
      goto joined_r0x00529ba4;
    }
  }
  else {
    iVar1 = 0;
    if (iVar2 != 0x19) {
      iVar1 = iVar2;
    }
    FUN_00511040(&local_40,iVar1);
    *(undefined8 *)(param_1 + 0xb9c) = uStack_28;
    *(undefined8 *)(param_1 + 0xb94) = local_30;
    *(undefined8 *)(param_1 + 0xb8c) = uStack_38;
    *(undefined8 *)(param_1 + 0xb84) = local_40;
  }
  iVar2 = *(int *)(param_1 + 0xb80);
joined_r0x00529ba4:
  if (iVar2 == -1) {
    if ((((*(float *)(param_1 + 0xba4) == DAT_0275cd8c) &&
         (*(float *)(param_1 + 0xba8) == DAT_0275cd90)) &&
        (*(float *)(param_1 + 0xbac) == DAT_0275cd94)) &&
       (((*(float *)(param_1 + 0xbb0) == DAT_0275cd98 &&
         (*(float *)(param_1 + 0xbb4) == DAT_0275cd9c)) &&
        ((*(float *)(param_1 + 3000) == DAT_0275cda0 &&
         ((*(float *)(param_1 + 0xbbc) == DAT_0275cda4 &&
          (*(float *)(param_1 + 0xbc0) == DAT_0275cda8)))))))) {
      if ((*(char *)(param_1 + 0x96c) == '\0') && (*(int *)PTR_DAT_02713a80 == 0)) {
        uVar3 = 0;
      }
      else {
        if (*(char *)(param_1 + 0x96c) == '\0') {
          uVar3 = 0xd;
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0x978);
        }
        uVar3 = FUN_005104b0(uVar3);
      }
      FUN_00511040(&local_40,uVar3);
      *(undefined8 *)(param_1 + 0xbb4) = local_30;
      *(undefined8 *)(param_1 + 0xbbc) = uStack_28;
      *(undefined8 *)(param_1 + 0xba4) = local_40;
      *(undefined8 *)(param_1 + 0xbac) = uStack_38;
    }
  }
  else {
    if (iVar2 == 0x19) {
      if ((*(char *)(param_1 + 0x96c) == '\0') && (*(int *)PTR_DAT_02713a80 == 0)) {
        iVar2 = 0;
      }
      else {
        if (*(char *)(param_1 + 0x96c) == '\0') {
          uVar3 = 0xd;
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0x978);
        }
        iVar2 = FUN_005104b0(uVar3);
      }
    }
    FUN_00511040(&local_40,iVar2);
    *(undefined8 *)(param_1 + 0xbbc) = uStack_28;
    *(undefined8 *)(param_1 + 0xbb4) = local_30;
    *(undefined8 *)(param_1 + 0xbac) = uStack_38;
    *(undefined8 *)(param_1 + 0xba4) = local_40;
  }
  return 0;
}


