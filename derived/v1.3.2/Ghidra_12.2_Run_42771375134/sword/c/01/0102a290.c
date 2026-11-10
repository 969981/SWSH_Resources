/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102a290; name: FUN_0102a290
 */


undefined8
FUN_0102a290(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  time_t tVar3;
  time_t tVar4;
  undefined8 uVar5;
  long lVar6;
  tm local_c0;
  tm local_88;
  
  FUN_01519940(&local_88,*param_2);
  local_c0._0_8_ = *param_3;
  local_c0._8_8_ = param_3[1];
  local_c0._16_8_ = param_3[2];
  local_c0._24_8_ = param_3[3];
  local_c0._32_8_ = param_3[4];
  local_c0.tm_gmtoff = param_3[5];
  local_c0.tm_zone = (char *)param_3[6];
  local_88.tm_sec = 0;
  tVar3 = mktime(&local_88);
  tVar4 = mktime(&local_c0);
  iVar1 = FUN_01029b00(tVar3);
  iVar2 = FUN_01029b00(tVar4);
  if (tVar4 - tVar3 < 0x96601bc) {
    lVar6 = (tVar4 - tVar3) / 0x3c;
  }
  else {
    lVar6 = 0x2819a0;
  }
  *param_4 = 0;
  *param_5 = 0;
  FUN_01519910(*param_2,&local_c0);
  if (tVar4 < tVar3) {
    uVar5 = 0;
  }
  else {
    if (0 < lVar6) {
      *param_5 = lVar6;
      if (0 < (long)((ulong)(uint)(iVar2 - iVar1) << 0x20)) {
        *param_4 = (long)(iVar2 - iVar1);
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


