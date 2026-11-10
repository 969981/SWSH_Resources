/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00444740; name: FUN_00444740
 */


undefined8 FUN_00444740(long param_1,uint *param_2,undefined1 *param_3)

{
  uint param4;
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *param3;
  int local_144 [65];
  int local_38;
  int local_34;
  
  param_1 = param_1 + 8;
  *param_3 = 0;
  iVar2 = FUN_0044e640(param_1,&local_38,8);
  if ((iVar2 == 1) && (local_38 == 0x44484b42)) {
    uVar3 = FUN_0044e640(param_1,param_2,0x14);
    puVar1 = PTR_DAT_02712fe0;
    if (((int)uVar3 == 1) && (*(uint *)PTR_DAT_02712fe0 != 0)) {
      *param_2 = *param_2 ^ *(uint *)PTR_DAT_02712fe0;
      param_2[1] = param_2[1] ^ *(uint *)(puVar1 + 4);
      param_2[2] = param_2[2] ^ *(uint *)(puVar1 + 8);
      *(ushort *)((long)param_2 + 0xe) =
           *(ushort *)(puVar1 + 0xe) ^ *(ushort *)((long)param_2 + 0xe);
    }
    if (((int)uVar3 == 1) && (iVar2 = local_34 + -0x14, iVar2 != 0)) {
      local_144[0] = 0;
      uVar3 = FUN_0044df40(param_1,iVar2,local_144);
      if (((int)uVar3 == 1) && (local_144[0] != iVar2)) {
        return 0x38;
      }
    }
    if ((int)uVar3 == 1) {
      param4 = *param_2;
      if (param4 < 0x80) {
        if (0x75 < param4) {
          *param_3 = 1;
          return 1;
        }
        param3 = "an older";
      }
      else {
        if (param4 == 0x80) {
          return 1;
        }
        param3 = "a newer";
      }
      snprintf((char *)local_144,0x104,
               "Load bank failed : incompatible bank version. Bank was generated with %s version of Wwise. The Bank version is %d and the current SDK version is %d"
               ,param3,param4,0x80);
      uVar3 = 0x40;
    }
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}


