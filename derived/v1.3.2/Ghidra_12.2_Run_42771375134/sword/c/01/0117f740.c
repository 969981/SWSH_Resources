/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117f740; name: FUN_0117f740
 */


void FUN_0117f740(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  char *pcVar4;
  ushort *puVar5;
  int *piVar6;
  char local_2c8 [4];
  undefined8 local_2c4;
  undefined8 local_2bc;
  undefined1 auStack_2b0 [608];
  undefined1 auStack_50 [16];
  uint local_34;
  
  puVar2 = PTR_DAT_02710958;
  FUN_01211940(auStack_2b0,*(undefined8 *)PTR_DAT_02710958);
  pcVar4 = (char *)FUN_01225ea0(auStack_2b0);
  local_2c8[0] = *pcVar4 != '\0';
  if ((bool)local_2c8[0]) {
    local_2c4 = *(undefined8 *)(pcVar4 + 4);
    local_2bc = *(undefined8 *)(pcVar4 + 0xc);
  }
  puVar5 = (ushort *)FUN_0121b430((ulong)local_2c8 | 4);
  uVar1 = *puVar5;
  piVar6 = (int *)FUN_0121b420((ulong)local_2c8 | 4);
  if (*piVar6 == 0) {
    FUN_01180470(param_1);
    bVar3 = (uint)uVar1 + (uVar1 / 10) * -10 != 1;
    if (bVar3) {
      *(undefined4 *)(param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 0x180) = 5;
    }
    else {
      *(undefined4 *)(param_1 + 0x180) = 1;
    }
    local_34 = (uint)!bVar3;
    FUN_0121b280(auStack_50,&local_34,(uint)uVar1,0,0);
    FUN_01211760(*(undefined8 *)puVar2,auStack_50);
  }
  return;
}


