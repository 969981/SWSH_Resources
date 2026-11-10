/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e4b60; name: FUN_007e4b60
 */


void FUN_007e4b60(string *param_1,long param_2,ulong param_3)

{
  size_t __n;
  char *__src;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  string *psVar6;
  undefined8 uVar7;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  ulong local_58;
  void *local_50;
  
  if (*(char *)(param_2 + 0x80) == '\0') {
    FUN_00801270(&local_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0x692);
    uVar3 = FUN_00800f30(&local_60,"CHECK failed: has_default_value(): ");
    uVar3 = FUN_00800f30(uVar3,"No default value");
    FUN_00800fa0(local_78,uVar3);
    FUN_00801290(&local_60);
  }
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_2 + 0x3c) * 4)) {
  case 1:
    FUN_007ffba0(param_1,*(undefined4 *)(param_2 + 0x88));
    break;
  case 2:
    FUN_007ffde0(param_1,*(undefined8 *)(param_2 + 0x88));
    break;
  case 3:
    FUN_007ffd10(param_1,*(undefined4 *)(param_2 + 0x88));
    break;
  case 4:
    FUN_007fff50(param_1,*(undefined8 *)(param_2 + 0x88));
    break;
  case 5:
    FUN_00800020(param_1,*(undefined8 *)(param_2 + 0x88));
    break;
  case 6:
    FUN_00800190(param_1,*(undefined4 *)(param_2 + 0x88));
    break;
  case 7:
    cVar1 = *(char *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)param_1 = 0;
    bVar2 = cVar1 == '\0';
    __n = 4;
    if (bVar2) {
      __n = 5;
    }
    *param_1 = SUB41((int)__n << 1,0);
    __src = "false";
    if (!bVar2) {
      __src = "true";
    }
    memcpy(param_1 + 1,__src,__n);
    (param_1 + 1)[__n] = (string)0x0;
    break;
  case 8:
    psVar6 = (string *)**(undefined8 **)(param_2 + 0x88);
    goto LAB_007e4cb0;
  case 9:
    if ((param_3 & 1) != 0) {
      FUN_007ff6d0(local_78,*(undefined8 *)(param_2 + 0x88));
      puVar4 = (ulong *)std::string::insert((ulong)local_78,(char *)0x0);
      local_60 = *puVar4;
      local_58 = puVar4[1];
      local_50 = (void *)puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar5 = (undefined8 *)std::string::append((char *)&local_60);
      uVar3 = *puVar5;
      uVar7 = puVar5[2];
      *(undefined8 *)(param_1 + 8) = puVar5[1];
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      *(undefined8 *)param_1 = uVar3;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if ((local_78[0] & 1) == 0) {
        return;
      }
      operator_delete(local_68);
      return;
    }
    psVar6 = *(string **)(param_2 + 0x88);
    if (*(uint *)(param_2 + 0x3c) == 0xc) {
      FUN_007ff6d0(param_1,psVar6);
      return;
    }
LAB_007e4cb0:
    std::string::string(param_1,psVar6);
    break;
  case 10:
    FUN_00801270(&local_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0x6b8);
    uVar3 = FUN_00800f30(&local_60,"Messages can\'t have default values!");
    FUN_00800fa0(local_78,uVar3);
    FUN_00801290(&local_60);
  default:
    FUN_00801270(&local_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0x6bb);
    uVar3 = FUN_00800f30(&local_60,"Can\'t get here: failed to get default value as string");
    FUN_00800fa0(local_78,uVar3);
    FUN_00801290(&local_60);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)param_1 = 0;
  }
  return;
}


