/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084d570; name: FUN_0084d570
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0084d570(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x130e);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0xff) != 0) {
    if ((uVar3 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      FUN_00860e40(param_1 + 0x18,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x18));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 3 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      FUN_00860e40(param_1 + 0x28,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x28));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      FUN_00860e40(param_1 + 0x30,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x30));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 6 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
      FUN_00860e40(param_1 + 0x40,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x40));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 7 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x3c);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      uVar3 = *(uint *)(param_2 + 0x10);
    }
  }
  if ((uVar3 & 0xff00) != 0) {
    if ((uVar3 >> 8 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
      FUN_00860e40(param_1 + 0x48,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x48));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 9 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x50);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
      if (plVar6 == (long *)0x0) {
        plVar6 = operator_new(0x60);
        *plVar6 = (long)(PTR_DAT_027172b0 + 0x10);
        FUN_00825430(plVar6 + 1);
        *(undefined4 *)(plVar6 + 0xb) = 0;
        plVar6[9] = 0;
        plVar6[10] = 0;
        plVar6[7] = 0;
        plVar6[8] = 0;
        plVar6[5] = 0;
        plVar6[6] = 0;
        *(long **)(param_1 + 0x50) = plVar6;
        lVar2 = *(long *)(param_2 + 0x50);
      }
      else {
        lVar2 = *(long *)(param_2 + 0x50);
      }
      if (lVar2 == 0) {
        lVar2 = *(long *)(*(long *)PTR_DAT_02716e60 + 0x50);
      }
      FUN_0084edc0(plVar6,lVar2);
    }
  }
  uVar4 = *(ulong *)(param_2 + 8);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_009bb7d0((ulong *)(param_1 + 8));
    uVar4 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar5 = uVar5 & 0xfffffffffffffffe;
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0080f460();
  }
  else {
    uVar4 = uVar4 & 0xfffffffffffffffe;
  }
  FUN_0080f7b0(uVar5,uVar4);
  return;
}


