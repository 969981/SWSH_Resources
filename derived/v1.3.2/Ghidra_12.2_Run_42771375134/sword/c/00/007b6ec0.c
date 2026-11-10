/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b6ec0; name: FUN_007b6ec0
 */


void FUN_007b6ec0(long *param_1,long *param_2,long param_3,long *param_4)

{
  void *pvVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  undefined4 local_58 [2];
  
  puVar3 = PTR_DAT_02716a50;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = (long)param_2;
  param_1[2] = (long)param_2;
  param_1[3] = 0x1fffffffffffffff;
  param_1[10] = (long)param_2;
  param_1[0xb] = 0x1fffffffffffffff;
  param_1[0x12] = 0;
  pvVar7 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  pvVar11 = (void *)param_1[0x12];
  pvVar10 = pvVar7;
  if (pvVar11 != (void *)0x0) {
    lVar9 = param_1[0x13];
    pvVar1 = (void *)((long)pvVar11 + lVar9 * 8);
    if (lVar9 == 0) {
      lVar9 = -(long)pvVar1;
    }
    else {
      memmove(pvVar7,pvVar11,lVar9 * 8);
      pvVar10 = (void *)((long)pvVar7 + lVar9 * 8);
      lVar9 = param_1[0x13] * 8 - (long)pvVar1;
    }
    sVar2 = (long)pvVar11 + lVar9;
    if (sVar2 != 0) {
      memmove(pvVar10,pvVar1,sVar2);
      pvVar10 = (void *)((long)pvVar10 + sVar2);
    }
    (**(code **)(*(long *)param_1[10] + 0x18))
              ((long *)param_1[10],param_1[0x12],param_1[0x14] << 3,8);
  }
  plVar8 = (long *)param_1[8];
  param_1[0x12] = (long)pvVar7;
  param_1[0x13] = (long)pvVar10 - (long)pvVar7 >> 3;
  param_1[0x14] = 0x10;
  param_1[0x16] = param_1[2];
  param_1[0x17] = param_1[3];
  if (plVar8 == (long *)0x0) {
    param_1[0x1c] = 0;
  }
  else if (param_1 + 4 == plVar8) {
    param_1[0x1c] = (long)(param_1 + 0x18);
    (**(code **)(*plVar8 + 0x18))();
  }
  else {
    lVar9 = (**(code **)(*plVar8 + 0x10))();
    param_1[0x1c] = lVar9;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if ((ulong)param_1[0x17] < 0x10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar7 = (void *)(**(code **)(*(long *)param_1[0x16] + 0x10))((long *)param_1[0x16],0x80,8);
  pvVar11 = (void *)param_1[0x1e];
  pvVar10 = pvVar7;
  if (pvVar11 != (void *)0x0) {
    lVar9 = param_1[0x1f];
    pvVar1 = (void *)((long)pvVar11 + lVar9 * 8);
    if (lVar9 == 0) {
      lVar9 = -(long)pvVar1;
    }
    else {
      memmove(pvVar7,pvVar11,lVar9 * 8);
      pvVar10 = (void *)((long)pvVar7 + lVar9 * 8);
      lVar9 = param_1[0x1f] * 8 - (long)pvVar1;
    }
    sVar2 = (long)pvVar11 + lVar9;
    if (sVar2 != 0) {
      memmove(pvVar10,pvVar1,sVar2);
      pvVar10 = (void *)((long)pvVar10 + sVar2);
    }
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],param_1[0x1e],param_1[0x20] << 3,8);
  }
  puVar4 = PTR_DAT_02716a60;
  puVar3 = PTR_DAT_02716a58;
  param_1[0x20] = 0x10;
  puVar5 = PTR_DAT_02716a68;
  param_1[0x1e] = (long)pvVar7;
  param_1[0x1f] = (long)pvVar10 - (long)pvVar7 >> 3;
  param_1[0x22] = (long)(puVar3 + 0x10);
  param_1[0x23] = 0;
  param_1[0x24] = (long)(puVar4 + 0x10);
  param_1[0x25] = 0;
  param_1[0x26] = (long)(puVar5 + 0x10);
  param_1[0x27] = 0;
  param_1[0x28] = (long)(PTR_DAT_02716a70 + 0x10);
  param_1[0x29] = 0;
  puVar3 = PTR_DAT_02716a78;
  param_1[0x2a] = (long)(PTR_DAT_02716a80 + 0x10);
  param_1[0x2b] = 0;
  param_1[0x2c] = (long)(puVar3 + 0x10);
  param_1[0x2d] = 0;
  param_1[0x2e] = (long)(PTR_DAT_02716a90 + 0x10);
  param_1[0x2f] = 0;
  puVar4 = PTR_DAT_02716a98;
  puVar3 = PTR_DAT_02716a88;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x30] = (long)(puVar4 + 0x10);
  param_1[0x31] = 0;
  param_1[0x32] = (long)(puVar3 + 0x10);
  param_1[0x33] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)param_1 + 0x1a4));
  local_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((long)param_1 + 0x1a4),(Result *)local_58);
  puVar6 = PTR_DAT_02716ab8;
  puVar5 = PTR_DAT_02716ab0;
  puVar4 = PTR_DAT_02716aa8;
  puVar3 = PTR_DAT_02716aa0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x36] = (long)(puVar3 + 0x10);
  param_1[0x37] = 0;
  param_1[0x38] = (long)(puVar4 + 0x10);
  param_1[0x39] = 0;
  param_1[0x3a] = (long)(puVar5 + 0x10);
  param_1[0x3b] = 0;
  param_1[0x3c] = (long)(puVar6 + 0x10);
  param_1[0x3d] = 0;
  lVar9 = *param_4;
  param_1[0x80] = lVar9;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = param_3;
  param_1[0x88] = (long)param_2;
  param_1[0x89] = 0xfffffffffffffff;
  param_1[0x8e] = 0;
  param_1[0x90] = (long)param_2;
  param_1[0x91] = 0xfffffffffffffff;
  param_1[0x96] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  pvVar7 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  pvVar11 = (void *)param_1[0x98];
  pvVar10 = pvVar7;
  if (pvVar11 != (void *)0x0) {
    lVar9 = param_1[0x99];
    pvVar1 = (void *)((long)pvVar11 + lVar9 * 0x10);
    if (lVar9 == 0) {
      lVar9 = -(long)pvVar1;
    }
    else {
      memmove(pvVar7,pvVar11,lVar9 * 0x10);
      pvVar10 = (void *)((long)pvVar7 + lVar9 * 0x10);
      lVar9 = param_1[0x99] * 0x10 - (long)pvVar1;
    }
    sVar2 = (long)pvVar11 + lVar9;
    if (sVar2 != 0) {
      memmove(pvVar10,pvVar1,sVar2);
      pvVar10 = (void *)((long)pvVar10 + sVar2);
    }
    (**(code **)(*(long *)param_1[0x90] + 0x18))
              ((long *)param_1[0x90],param_1[0x98],param_1[0x9a] << 4,8);
  }
  param_1[0x9a] = 8;
  param_1[0x99] = (long)pvVar10 - (long)pvVar7 >> 4;
  param_1[0x98] = (long)pvVar7;
  *(undefined4 *)((long)param_1 + 0x4ec) = 0;
  param_1[0x9c] = 0;
  *(undefined1 *)(param_1 + 0x9d) = 1;
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)param_1 + 0x284),0,0x168);
}


