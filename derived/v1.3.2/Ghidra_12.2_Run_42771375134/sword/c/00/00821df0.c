/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00821df0; name: FUN_00821df0
 */


void FUN_00821df0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (*(char *)((long)param_1 + 0xc) == '\0') {
    if (lVar4 == 0) {
      puVar1 = operator_new(0x30);
      *puVar1 = 0;
      puVar1[2] = puVar1;
      puVar1[5] = 0;
      puVar2 = malloc(0x40);
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar1[1] = 8;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar1[3] = 8;
      puVar1[4] = puVar2;
      goto LAB_00821f20;
    }
    puVar1 = (undefined8 *)FUN_0080efb0(lVar4,0,0x30);
    *puVar1 = 0;
    puVar1[2] = puVar1;
    puVar1[4] = 0;
    puVar1[5] = lVar4;
    puVar2 = (undefined8 *)FUN_0080efb0(lVar4,0,0x40);
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar1[1] = 8;
    puVar1[3] = 8;
    puVar1[4] = puVar2;
    puVar3 = PTR_LAB_02717138;
  }
  else {
    if (lVar4 == 0) {
      puVar1 = operator_new(0x38);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 6) = 0x3f800000;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      FUN_00821f40(puVar1,0);
      goto LAB_00821f20;
    }
    puVar1 = (undefined8 *)FUN_0080efb0(lVar4,0,0x38);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    puVar1[2] = lVar4;
    puVar1[3] = 0;
    puVar1[4] = lVar4;
    puVar1[5] = 0;
    FUN_00821f40(puVar1,0);
    puVar3 = PTR_LAB_02717130;
  }
  FUN_0080eeb0(lVar4,puVar1,puVar3);
LAB_00821f20:
  param_1[2] = (long)puVar1;
  return;
}


