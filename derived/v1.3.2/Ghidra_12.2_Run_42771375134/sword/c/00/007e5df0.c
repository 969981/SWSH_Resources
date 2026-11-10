/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e5df0; name: FUN_007e5df0
 */


void FUN_007e5df0(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char *pcVar4;
  string *psVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  string local_48 [16];
  void *local_38;
  
  puVar3 = PTR_DAT_02716d10;
  psVar5 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar3) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar5);
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 7);
  *(uint *)(param_2 + 0x10) = uVar6 | 2;
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  if (*(char *)(param_1 + 4) != '\0') {
    psVar5 = (string *)param_1[5];
    *(uint *)(param_2 + 0x10) = uVar6 | 0x102;
    if (*(string **)(param_2 + 0x48) == *(string **)puVar3) {
      FUN_009b58d0();
    }
    else {
      std::string::operator=(*(string **)(param_2 + 0x48),psVar5);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(uint *)(param_2 + 0x10) = uVar6 | 4;
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  uVar2 = *(undefined4 *)((long)param_1 + 0x3c);
  uVar6 = uVar6 | 0xc;
  *(uint *)(param_2 + 0x10) = uVar6;
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  if (*(char *)((long)param_1 + 0x44) != '\0') {
    if (*(char *)(param_1[10] + 0x29) == '\0') {
      FUN_007e61f0(param_2,&DAT_01cddc9a);
      uVar6 = *(uint *)(param_2 + 0x10);
    }
    plVar9 = (long *)(param_2 + 0x30);
    pcVar4 = (char *)*plVar9;
    *(uint *)(param_2 + 0x10) = uVar6 | 0x20;
    if (pcVar4 == *(char **)puVar3) {
      FUN_009b58d0(plVar9);
      pcVar4 = (char *)*plVar9;
    }
    pbVar7 = *(byte **)(param_1[10] + 8);
    pbVar1 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar1 = pbVar7 + 1;
    }
    std::string::append(pcVar4,(ulong)pbVar1);
  }
  if (*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)((long)param_1 + 0x3c) * 4) == 8) {
    if (*(char *)(param_1[0xe] + 0x29) == '\0') {
      FUN_007e6300(param_2,&DAT_01cddc9a);
    }
    plVar9 = (long *)(param_2 + 0x28);
    pcVar4 = (char *)*plVar9;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
    if (pcVar4 == *(char **)puVar3) {
      FUN_009b58d0(plVar9);
      pcVar4 = (char *)*plVar9;
    }
    lVar8 = param_1[0xe];
  }
  else {
    if (*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)((long)param_1 + 0x3c) * 4) != 10)
    goto LAB_007e602c;
    lVar8 = param_1[0xd];
    if (*(char *)(lVar8 + 0x28) != '\0') {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffff7;
      lVar8 = param_1[0xd];
    }
    if (*(char *)(lVar8 + 0x29) == '\0') {
      FUN_007e6300(param_2,&DAT_01cddc9a);
    }
    plVar9 = (long *)(param_2 + 0x28);
    pcVar4 = (char *)*plVar9;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
    if (pcVar4 == *(char **)puVar3) {
      FUN_009b58d0(plVar9);
      pcVar4 = (char *)*plVar9;
    }
    lVar8 = param_1[0xd];
  }
  pbVar7 = *(byte **)(lVar8 + 8);
  pbVar1 = *(byte **)(pbVar7 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar1 = pbVar7 + 1;
  }
  std::string::append(pcVar4,(ulong)pbVar1);
LAB_007e602c:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_007e4b60(local_48,param_1,0);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x40;
    if (*(string **)(param_2 + 0x40) == *(string **)puVar3) {
      FUN_009b58d0();
    }
    else {
      std::string::operator=(*(string **)(param_2 + 0x40),local_48);
    }
    if (((byte)local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
  }
  lVar8 = param_1[0xb];
  if ((lVar8 != 0) && (*(char *)((long)param_1 + 0x44) == '\0')) {
    *(int *)(param_2 + 0x3c) =
         (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x10) + 0x40)) >> 4) * -0x55555555;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x80;
  }
  lVar10 = param_1[0xf];
  lVar8 = FUN_0084d530();
  if (lVar10 != lVar8) {
    pvVar11 = *(void **)(param_2 + 0x50);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200;
    if (pvVar11 == (void *)0x0) {
      pvVar11 = operator_new(0x60);
      FUN_00856a30();
      *(void **)(param_2 + 0x50) = pvVar11;
    }
    FUN_008578b0(pvVar11,param_1[0xf]);
  }
  return;
}


