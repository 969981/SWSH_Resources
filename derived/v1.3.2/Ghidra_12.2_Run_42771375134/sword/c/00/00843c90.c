/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00843c90; name: FUN_00843c90
 */


undefined1  [16] FUN_00843c90(char *param_1,long *param_2)

{
  uint uVar1;
  char *__nptr;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  double dVar10;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar11 [16];
  char *local_98;
  ulong local_90;
  undefined8 local_88;
  char *local_80;
  char cStack_61;
  char *local_60 [2];
  undefined1 auStack_48 [8];
  
  dVar10 = strtod(param_1,&local_98);
  if (param_2 == (long *)0x0) {
    cVar2 = *local_98;
  }
  else {
    *param_2 = (long)local_98;
    cVar2 = *local_98;
  }
  uVar7 = extraout_var;
  if (cVar2 == '.') {
    iVar6 = sprintf((char *)local_60,"%.1f",0x3ff8000000000000);
    if ((char)local_60[0] == '1') {
      cVar2 = *(char *)((long)local_60 + (long)iVar6 + -1);
    }
    else {
      FUN_00801270(&local_90,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/strtod.cc"
                   ,0x3f);
      uVar7 = FUN_00800f30(&local_90,"CHECK failed: (temp[0]) == (\'1\'): ");
      FUN_00800fa0(auStack_48,uVar7);
      FUN_00801290(&local_90);
      cVar2 = *(char *)((long)local_60 + (long)iVar6 + -1);
    }
    if (cVar2 != '5') {
      FUN_00801270(&local_90,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/strtod.cc"
                   ,0x40);
      uVar7 = FUN_00800f30(&local_90,"CHECK failed: (temp[size-1]) == (\'5\'): ");
      FUN_00800fa0(auStack_48,uVar7);
      FUN_00801290(&local_90);
    }
    if (6 < iVar6) {
      FUN_00801270(&local_90,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/strtod.cc"
                   ,0x41);
      uVar7 = FUN_00800f30(&local_90,"CHECK failed: (size) <= (6): ");
      FUN_00800fa0(auStack_48,uVar7);
      FUN_00801290(&local_90);
    }
    local_88 = 0;
    local_80 = (char *)0x0;
    local_90 = 0;
    strlen(param_1);
    std::string::reserve((ulong)&local_90);
    FUN_00843f30(&local_90,param_1,local_98);
    std::string::append((char *)&local_90,(ulong)local_60 | 1);
    std::string::append((char *)&local_90);
    __nptr = (char *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      __nptr = local_80;
    }
    dVar10 = strtod(__nptr,local_60);
    uVar4 = local_90;
    uVar7 = extraout_var_00;
    if ((param_2 != (long *)0x0) &&
       (lVar9 = CONCAT71(local_60[0]._1_7_,(char)local_60[0]) - (long)__nptr,
       (long)local_98 - (long)param_1 < lVar9)) {
      uVar5 = (uint)local_88;
      bVar3 = (byte)local_90 >> 1;
      sVar8 = strlen(param_1);
      uVar1 = (uint)bVar3;
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar5;
      }
      *param_2 = (long)(param_1 + (lVar9 - (int)(uVar1 - (int)sVar8)));
    }
    if ((uVar4 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = dVar10;
  return auVar11;
}


