/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00863060; name: FUN_00863060
 */


void FUN_00863060(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  size_t __n;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  void *__dest;
  undefined8 *puVar11;
  undefined8 auStack_228 [36];
  ulong local_108;
  size_t local_100;
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  undefined1 auStack_d8 [48];
  long local_a8 [10];
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  
  local_a8[5] = param_8;
  local_a8[6] = param_9;
  uVar7 = 0;
  iVar5 = 0;
  local_a8[4] = param_7;
  local_a8[9] = param_12;
  uStack_58 = 0;
  local_a8[0] = param_3;
  local_a8[1] = param_4;
  local_a8[2] = param_5;
  local_a8[3] = param_6;
  local_a8[7] = param_10;
  local_a8[8] = param_11;
  lVar9 = 0;
  bVar1 = *param_2;
  if (bVar1 != 0x24) goto LAB_00863114;
  while( true ) {
    uVar7 = lVar9 + 1;
    uVar10 = param_2[uVar7] - 0x30;
    if (9 < uVar10) break;
    if (*(int *)(local_a8[(int)uVar10] + 8) == -1) {
      FUN_00801270(auStack_d8,2,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/substitute.cc"
                   ,0x54);
      uVar2 = FUN_00800f30(auStack_d8,"strings::Substitute format string invalid: asked for \"$");
      uVar2 = FUN_00801220(uVar2,uVar10);
      uVar2 = FUN_00800f30(uVar2,"\", but only ");
      uVar7 = 0;
      goto LAB_008631b4;
    }
    iVar5 = *(int *)(local_a8[(int)uVar10] + 8) + iVar5;
    while( true ) {
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar10;
      lVar9 = (long)(int)uVar10;
      bVar1 = param_2[lVar9];
      if (bVar1 == 0x24) break;
LAB_00863114:
      if (bVar1 == 0) {
        if (iVar5 == 0) {
          return;
        }
        if ((*param_1 & 1) == 0) {
          uVar10 = (uint)(*param_1 >> 1);
        }
        else {
          uVar10 = (uint)*(undefined8 *)(param_1 + 8);
        }
        std::string::resize((ulong)param_1,(char)iVar5 + (char)uVar10);
        bVar1 = *param_1;
        if ((bVar1 & 1) == 0) {
          pbVar8 = (byte *)0x0;
          if (bVar1 >> 1 == 0) goto LAB_008632e0;
        }
        else if (*(long *)(param_1 + 8) == 0) {
          pbVar8 = (byte *)0x0;
          goto LAB_008632e0;
        }
        if ((bVar1 & 1) == 0) {
          pbVar8 = param_1 + 1;
        }
        else {
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
LAB_008632e0:
        uVar6 = 0;
        lVar9 = 0;
        bVar1 = *param_2;
        pbVar8 = pbVar8 + (int)uVar10;
        while( true ) {
          while (bVar1 == 0x24) {
            uVar7 = lVar9 + 1;
            bVar1 = param_2[uVar7];
            if ((byte)(bVar1 - 0x30) < 10) {
              puVar11 = (undefined8 *)auStack_228[bVar1];
              memcpy(pbVar8,(void *)*puVar11,(long)*(int *)(puVar11 + 1));
              pbVar8 = pbVar8 + *(int *)(puVar11 + 1);
            }
            else if (bVar1 == 0x24) {
              *pbVar8 = 0x24;
              pbVar8 = pbVar8 + 1;
            }
            else {
              uVar7 = (ulong)uVar6;
            }
            uVar6 = (int)uVar7 + 1;
            lVar9 = (long)(int)uVar6;
            bVar1 = param_2[lVar9];
          }
          if (bVar1 == 0) break;
          uVar6 = uVar6 + 1;
          *pbVar8 = bVar1;
          lVar9 = (long)(int)uVar6;
          bVar1 = param_2[lVar9];
          pbVar8 = pbVar8 + 1;
        }
        return;
      }
LAB_008630fc:
      iVar5 = iVar5 + 1;
    }
  }
  if (param_2[uVar7] == 0x24) goto LAB_008630fc;
  FUN_00801270(auStack_d8,2,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/substitute.cc"
               ,0x61);
  pcVar4 = "Invalid strings::Substitute() format string: \"";
  puVar3 = auStack_d8;
  goto LAB_00863208;
  while( true ) {
    param_3 = local_a8[uVar7 + 1];
    uVar7 = uVar7 + 1;
    if (param_3 == 0) break;
LAB_008631b4:
    if (*(int *)(param_3 + 8) == -1) goto LAB_008631d4;
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_008631d4:
  puVar3 = (undefined1 *)FUN_00801220(uVar2,uVar7);
  pcVar4 = " args were given.  Full format string was: \"";
LAB_00863208:
  uVar2 = FUN_00800f30(puVar3,pcVar4);
  local_108 = 0;
  local_100 = 0;
  local_f8 = (void *)0x0;
  __n = strlen((char *)param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_108 = CONCAT71(local_108._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_108 | 1);
    if (__n == 0) goto LAB_0086327c;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_108 = uVar7 | 1;
    local_100 = __n;
    local_f8 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0086327c:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_007ff6d0(local_f0,&local_108);
  uVar2 = FUN_00800f60(uVar2,local_f0);
  uVar2 = FUN_00800f30(uVar2,&DAT_01cebaa1);
  FUN_00800fa0(auStack_48,uVar2);
  if ((local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  FUN_00801290(auStack_d8);
  return;
}


