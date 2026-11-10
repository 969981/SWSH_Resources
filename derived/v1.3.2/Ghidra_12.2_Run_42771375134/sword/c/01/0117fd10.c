/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117fd10; name: FUN_0117fd10
 */


undefined8 FUN_0117fd10(long param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 in_x4;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *local_340 [2];
  long alStack_330 [4];
  long *local_310;
  long local_300;
  ulong local_2f8;
  long local_2f0;
  char local_2d8 [4];
  undefined8 local_2d4;
  undefined8 local_2cc;
  long local_2c0 [2];
  char local_2b0;
  char local_2a8;
  char local_298;
  char local_274;
  char local_260;
  char local_224;
  char local_21c;
  char local_1d0;
  char local_110;
  char local_c0;
  undefined8 local_58;
  
  if ((*(char *)(param_1 + 0x184) == '\0') ||
     (uVar5 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940), (uVar5 & 1) != 0)) {
    return 0;
  }
  lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)UndefinedInstructionException(0,0x117fff8);
    (*pcVar9)();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  FUN_01127680(local_2c0,lVar10);
  if (*(long *)(local_2c0[0] + 0x60) == 0) {
    if ((*(long *)(local_2c0[0] + 0x68) == 0) && (*(long *)(local_2c0[0] + 0x70) == 0)) {
      lVar12 = *(long *)(local_2c0[0] + 0x78);
      (**(code **)(*(long *)(local_2c0[0] + 0x48) + 0x18))();
      local_2c0[0] = 0;
      if (lVar12 != 0) goto LAB_0117fd9c;
      FUN_01211940(local_2c0,*(undefined8 *)PTR_DAT_02710958);
      pcVar6 = (char *)FUN_01225ea0(local_2c0);
      local_2d8[0] = *pcVar6 != '\0';
      if ((bool)local_2d8[0]) {
        local_2d4 = *(undefined8 *)(pcVar6 + 4);
        local_2cc = *(undefined8 *)(pcVar6 + 0xc);
      }
      uVar11 = FUN_0120e710(*(undefined8 *)PTR_DAT_027185f8);
      FUN_01180a20(local_340,uVar11);
      puVar4 = PTR_DAT_02718f20;
      if (local_2f8 != 0) {
        lVar12 = 0;
        uVar5 = 0;
        do {
          iVar2 = *(int *)(local_300 + lVar12 + 4);
          bVar3 = *(byte *)(local_300 + lVar12 + 0x14);
          piVar7 = (int *)FUN_0121b440((ulong)local_2d8 | 4);
          if (((bVar3 & 1) != 0) && (iVar2 == *piVar7)) {
            local_58 = *(undefined8 *)(param_1 + 0x188);
            uVar8 = FUN_011fec20(*(undefined8 *)puVar4,iVar2,0,0,in_x4,&local_58);
            if ((uVar8 & 1) != 0) {
              *(undefined4 *)(param_1 + 0x180) = 9;
              uVar11 = 1;
              goto joined_r0x0117fff0;
            }
          }
          uVar5 = uVar5 + 1;
          lVar12 = lVar12 + 0x18;
        } while (uVar5 < local_2f8);
      }
      uVar11 = 0;
joined_r0x0117fff0:
      if (local_2f0 != 0) {
        (**(code **)(*local_340[0] + 0x18))(local_340[0],local_300,local_2f0 * 0x18,4);
      }
      if (alStack_330 == local_310) {
        pcVar9 = *(code **)(*local_310 + 0x20);
LAB_0117ff50:
        (*pcVar9)();
      }
      else if (local_310 != (long *)0x0) {
        pcVar9 = *(code **)(*local_310 + 0x28);
        goto LAB_0117ff50;
      }
      if (local_2d8[0] != '\0') {
        local_2d8[0] = '\0';
      }
      if (local_c0 != '\0') {
        local_c0 = '\0';
      }
      if (local_110 != '\0') {
        local_110 = '\0';
      }
      if (local_1d0 != '\0') {
        local_1d0 = '\0';
      }
      if (local_224 != '\0') {
        if (local_21c != '\0') {
          local_21c = '\0';
        }
        local_224 = '\0';
      }
      if (local_260 != '\0') {
        local_260 = '\0';
      }
      if (local_274 != '\0') {
        local_274 = '\0';
      }
      if (local_298 != '\0') {
        local_298 = '\0';
      }
      if (local_2a8 != '\0') {
        local_2a8 = '\0';
      }
      bVar1 = local_2b0 != '\0';
      local_2b0 = '\0';
      if (bVar1) {
        local_2b0 = '\0';
      }
      goto joined_r0x0117fdcc;
    }
  }
  else if (local_2c0[0] == 0) {
LAB_0117fd9c:
    uVar11 = 0;
    goto joined_r0x0117fdcc;
  }
  (**(code **)(*(long *)(local_2c0[0] + 0x48) + 0x18))();
  uVar11 = 0;
  local_2c0[0] = 0;
joined_r0x0117fdcc:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return uVar11;
}


