/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e64e0; name: FUN_007e64e0
 */


void FUN_007e64e0(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  string *psVar6;
  byte *pbVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  
  puVar3 = PTR_DAT_02716d10;
  psVar6 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar3) {
    FUN_009b58d0();
    cVar2 = *(char *)(param_1[3] + 0x29);
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar6);
    cVar2 = *(char *)(param_1[3] + 0x29);
  }
  if (cVar2 == '\0') {
    FUN_007e66b0(param_2,&DAT_01cddc9a);
  }
  plVar8 = (long *)(param_2 + 0x20);
  pcVar4 = (char *)*plVar8;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (pcVar4 == *(char **)puVar3) {
    FUN_009b58d0(plVar8);
    pcVar4 = (char *)*plVar8;
  }
  pbVar7 = *(byte **)(param_1[3] + 8);
  pbVar1 = *(byte **)(pbVar7 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar1 = pbVar7 + 1;
  }
  std::string::append(pcVar4,(ulong)pbVar1);
  if (*(char *)(param_1[4] + 0x29) == '\0') {
    FUN_007e67c0(param_2,&DAT_01cddc9a);
  }
  plVar8 = (long *)(param_2 + 0x28);
  pcVar4 = (char *)*plVar8;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  if (pcVar4 == *(char **)puVar3) {
    FUN_009b58d0(plVar8);
    pcVar4 = (char *)*plVar8;
  }
  pbVar7 = *(byte **)(param_1[4] + 8);
  pbVar1 = *(byte **)(pbVar7 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar1 = pbVar7 + 1;
  }
  std::string::append(pcVar4,(ulong)pbVar1);
  lVar9 = param_1[5];
  lVar5 = FUN_008530e0();
  if (lVar9 != lVar5) {
    pvVar10 = *(void **)(param_2 + 0x30);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
    if (pvVar10 == (void *)0x0) {
      pvVar10 = operator_new(0x58);
      FUN_0085a100();
      *(void **)(param_2 + 0x30) = pvVar10;
    }
    FUN_0085a9c0(pvVar10,param_1[5]);
  }
  if (*(char *)(param_1 + 6) != '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  if (*(char *)((long)param_1 + 0x31) != '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20;
    *(undefined1 *)(param_2 + 0x39) = 1;
  }
  return;
}


