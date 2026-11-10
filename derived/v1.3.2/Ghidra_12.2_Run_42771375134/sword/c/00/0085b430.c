/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085b430; name: FUN_0085b430
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0085b430(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x345f);
  }
  FUN_0085c4d0(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1fe) != 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      FUN_00860e40(param_1 + 0x30,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x30));
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      *(undefined8 *)(param_1 + 0x40) = uVar2;
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      FUN_00860e40(param_1 + 0x50,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x50));
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
      FUN_00860e40(param_1 + 0x58,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x58));
    }
  }
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_009bb7d0((ulong *)(param_1 + 8));
    uVar3 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar4 = uVar4 & 0xfffffffffffffffe;
  }
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_0080f460();
    FUN_0080f7b0(uVar4,uVar2);
    return;
  }
  FUN_0080f7b0(uVar4,uVar3 & 0xfffffffffffffffe);
  return;
}


