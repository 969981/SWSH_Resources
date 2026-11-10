/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00849640; name: FUN_00849640
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00849640(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x2292);
  }
  FUN_00855b60(param_1 + 0x68,param_2 + 0x68);
  uVar4 = *(uint *)(param_2 + 0x30);
  if ((uVar4 & 0xff) != 0) {
    if ((uVar4 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
      FUN_00860e40(param_1 + 0x38,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x38));
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
      FUN_00860e40(param_1 + 0x40,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x40));
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
      *(undefined1 *)(param_1 + 0x48) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 3 & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x49);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
      *(undefined1 *)(param_1 + 0x49) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 4 & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x4a);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
      *(undefined1 *)(param_1 + 0x4a) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 5 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x4c);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 6 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
      FUN_00860e40(param_1 + 0x50,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x50));
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 7 & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x4b);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80;
      *(undefined1 *)(param_1 + 0x4b) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
  }
  if ((uVar4 & 0xff00) != 0) {
    if ((uVar4 >> 8 & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x80);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
      *(undefined1 *)(param_1 + 0x80) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 9 & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x81);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
      *(undefined1 *)(param_1 + 0x81) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 10 & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x82);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400;
      *(undefined1 *)(param_1 + 0x82) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 0xb & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x83);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800;
      *(undefined1 *)(param_1 + 0x83) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 0xc & 1) != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000;
      FUN_00860e40(param_1 + 0x58,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x58));
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 >> 0xd & 1) != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x2000;
      FUN_00860e40(param_1 + 0x60,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x60));
    }
  }
  FUN_00829d00(param_1 + 8,param_2 + 8);
  uVar5 = *(ulong *)(param_2 + 0x28);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_009bb7d0((ulong *)(param_1 + 0x28));
    uVar5 = *(ulong *)(param_2 + 0x28);
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffe;
  }
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_0080f460();
    FUN_0080f7b0(uVar6,uVar3);
    return;
  }
  FUN_0080f7b0(uVar6,uVar5 & 0xfffffffffffffffe);
  return;
}


