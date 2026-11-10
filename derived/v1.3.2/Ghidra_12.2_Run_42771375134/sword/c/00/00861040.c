/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00861040; name: FUN_00861040
 */


/* WARNING: Removing unreachable block (ram,0x00861090) */

undefined8 FUN_00861040(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_4;
  uVar2 = FUN_008618d0(param_1,*(undefined8 *)(param_2 + 0x18),&local_40);
  if ((uVar2 & 1) == 0) {
    FUN_00801270(&local_70,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_database.cc"
                 ,0x39);
    uVar3 = FUN_00800f30(&local_70,"File already exists in database: ");
    uVar3 = FUN_00800f60(uVar3,*(undefined8 *)(param_2 + 0x18));
    FUN_00800fa0(local_88,uVar3);
    FUN_00801290(&local_70);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  else {
    std::string::string((string *)&local_70,*(string **)(param_2 + 0x20));
    uVar2 = local_70 >> 1 & 0x7f;
    if ((local_70 & 1) != 0) {
      uVar2 = local_68;
    }
    if (uVar2 != 0) {
      std::string::push_back((char)&local_70);
    }
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar4 = 1;
    do {
      FUN_00807080(local_88,&local_70,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + lVar4 * 8) + 0x18));
      uVar2 = FUN_008619c0(param_1,local_88,local_40,uStack_38);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if (((uVar2 & 1) == 0) ||
         (uVar2 = FUN_00861db0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + lVar4 * 8),
                               local_40,uStack_38), (uVar2 & 1) == 0)) goto LAB_008612e0;
      bVar1 = lVar4 < *(int *)(param_2 + 0x68);
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar4 = 0;
    do {
      FUN_00807080(local_88,&local_70,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x88) + lVar4 * 8 + 8) + 0x18));
      uVar2 = FUN_008619c0(param_1,local_88,local_40,uStack_38);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if ((uVar2 & 1) == 0) goto LAB_008612e0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x80));
  }
  if (0 < *(int *)(param_2 + 0xb0)) {
    lVar4 = 1;
    do {
      FUN_00807080(local_88,&local_70,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xb8) + lVar4 * 8) + 0x18));
      uVar2 = FUN_008619c0(param_1,local_88,local_40,uStack_38);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if (((uVar2 & 1) == 0) ||
         (uVar2 = FUN_00861e80(param_1,*(undefined8 *)(*(long *)(param_2 + 0xb8) + lVar4 * 8),
                               local_40,uStack_38), (uVar2 & 1) == 0)) goto LAB_008612e0;
      bVar1 = lVar4 < *(int *)(param_2 + 0xb0);
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  if (0 < *(int *)(param_2 + 0x98)) {
    lVar4 = 0;
    do {
      FUN_00807080(local_88,&local_70,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa0) + lVar4 * 8 + 8) + 0x18));
      uVar2 = FUN_008619c0(param_1,local_88,local_40,uStack_38);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if ((uVar2 & 1) == 0) goto LAB_008612e0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x98));
  }
  uVar3 = 1;
joined_r0x008612e8:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  return uVar3;
LAB_008612e0:
  uVar3 = 0;
  goto joined_r0x008612e8;
}


