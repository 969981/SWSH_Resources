/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011801d0; name: FUN_011801d0
 */


undefined8 FUN_011801d0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ushort *puVar11;
  int *piVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  char local_308 [4];
  undefined8 local_304;
  undefined8 local_2fc;
  undefined1 auStack_2f0 [608];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_7c;
  undefined1 auStack_78 [24];
  
  puVar9 = (undefined8 *)FUN_012182b0(param_2);
  puVar8 = PTR_DAT_02710958;
  local_90 = *puVar9;
  uStack_88 = puVar9[1];
  FUN_01211940(auStack_2f0,*(undefined8 *)PTR_DAT_02710958);
  pcVar10 = (char *)FUN_01225ea0(auStack_2f0);
  local_308[0] = *pcVar10 != '\0';
  if ((bool)local_308[0]) {
    local_304 = *(undefined8 *)(pcVar10 + 4);
    local_2fc = *(undefined8 *)(pcVar10 + 0xc);
  }
  uVar15 = (ulong)local_308 | 4;
  puVar11 = (ushort *)FUN_0121b430(uVar15);
  uVar2 = *puVar11;
  puVar11 = (ushort *)FUN_0121b430(&local_90);
  uVar3 = *puVar11;
  puVar11 = (ushort *)FUN_0121b450(&local_90);
  if ((uint)uVar3 + (uVar3 / 10) * -10 == 1) {
    uVar3 = *puVar11;
    puVar11 = (ushort *)FUN_0121b430(&local_90);
    uVar4 = *puVar11;
    puVar11 = (ushort *)FUN_0121b430(uVar15);
    if (uVar4 / 10 == *puVar11 / 10) {
      uVar6 = (uint)uVar2 + (uVar2 / 10) * -10;
      piVar12 = (int *)FUN_0121b440(&local_90);
      if ((1 < (uVar6 & 0xffff)) && (*piVar12 != 0)) {
        uVar7 = (uint)uVar3 + (uVar3 / 10) * -10;
        if (((((uVar6 & 0xffff) != 2) || ((uVar7 & 0xffff) == 2)) &&
            (((uVar6 & 0xffff) < 3 || (2 < (uVar7 & 0xffff))))) &&
           (((uVar6 & 0xffff) == 2 || (piVar12 = (int *)FUN_0121b420(&local_90), *piVar12 == 2)))) {
          puVar13 = (undefined2 *)FUN_0121b430(uVar15);
          uVar5 = *puVar13;
          puVar14 = (undefined4 *)FUN_0121b440(&local_90);
          uVar1 = *puVar14;
          FUN_01180470(param_1);
          *(undefined4 *)(param_1 + 0x180) = 7;
          local_7c = 1;
          FUN_0121b280(auStack_78,&local_7c,uVar5,uVar1,0);
          FUN_01211760(*(undefined8 *)puVar8,auStack_78);
          return 1;
        }
      }
    }
  }
  return 0;
}


