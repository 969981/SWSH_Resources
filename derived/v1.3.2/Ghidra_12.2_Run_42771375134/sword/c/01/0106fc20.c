/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106fc20; name: FUN_0106fc20
 */


undefined * FUN_0106fc20(uint param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  
  if (param_1 - 3 < 5) {
    uVar2 = 5;
    puVar4 = (uint *)PTR_DAT_02723c88;
    if (param_2 != '\x01') {
      uVar2 = 0;
      puVar4 = (uint *)0x0;
    }
    if (param_2 == '\0') {
      uVar2 = 3;
      uVar1 = *(uint *)PTR_DAT_02723c90;
      puVar4 = (uint *)PTR_DAT_02723c90;
joined_r0x0106fcec:
      if (uVar1 == param_1) goto LAB_0106fd30;
    }
    else {
LAB_0106fc94:
      if ((uVar2 == 0) || (*puVar4 == param_1 || uVar2 < 2)) goto LAB_0106fd30;
    }
    if (puVar4[1] == param_1) {
      lVar3 = 1;
      goto LAB_0106fd34;
    }
    if (2 < uVar2) {
      if (puVar4[2] == param_1) {
        lVar3 = 2;
        goto LAB_0106fd34;
      }
      if (3 < uVar2) {
        if (puVar4[3] == param_1) {
          lVar3 = 3;
          goto LAB_0106fd34;
        }
        if (4 < uVar2) {
          lVar3 = (ulong)(puVar4[4] == param_1) << 2;
          goto LAB_0106fd34;
        }
      }
    }
  }
  else if (param_1 < 3) {
    uVar2 = 3;
    puVar4 = (uint *)PTR_DAT_02723c98;
    if (param_2 != '\x01') {
      uVar2 = 0;
      puVar4 = (uint *)0x0;
    }
    if (param_2 != '\0') goto LAB_0106fc94;
    uVar2 = 2;
    uVar1 = *(uint *)PTR_DAT_02723ca0;
    puVar4 = (uint *)PTR_DAT_02723ca0;
    goto joined_r0x0106fcec;
  }
LAB_0106fd30:
  lVar3 = 0;
LAB_0106fd34:
  return PTR_DAT_02723cb0 + lVar3 * 0x28 + 0x78;
}


