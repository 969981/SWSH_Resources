/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00853120; name: FUN_00853120
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00853120(long param_1,long param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x1e10);
  }
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar4 = (uint)bVar1;
  if (bVar1 == 0) goto LAB_00853174;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) != 0) {
LAB_008531e4:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      FUN_00860e40(param_1 + 0x20,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x20));
      uVar4 = *(uint *)(param_2 + 0x10);
    }
  }
  else {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    FUN_00860e40(param_1 + 0x18,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x18));
    uVar4 = *(uint *)(param_2 + 0x10);
    if ((uVar4 >> 1 & 1) != 0) goto LAB_008531e4;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    FUN_00860e40(param_1 + 0x28,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x28));
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x30);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
    if (plVar7 == (long *)0x0) {
      plVar7 = operator_new(0x58);
      *plVar7 = (long)(PTR_DAT_027172d8 + 0x10);
      FUN_00825430(plVar7 + 1);
      *(undefined1 *)(plVar7 + 10) = 0;
      plVar7[8] = 0;
      plVar7[9] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      *(long **)(param_1 + 0x30) = plVar7;
      lVar3 = *(long *)(param_2 + 0x30);
    }
    else {
      lVar3 = *(long *)(param_2 + 0x30);
    }
    if (lVar3 == 0) {
      FUN_00854200(plVar7,*(undefined8 *)(*(long *)PTR_DAT_02716e70 + 0x30));
      uVar4 = *(uint *)(param_2 + 0x10);
    }
    else {
      FUN_00854200(plVar7);
      uVar4 = *(uint *)(param_2 + 0x10);
    }
  }
  if ((uVar4 >> 4 & 1) != 0) {
    uVar2 = *(undefined1 *)(param_2 + 0x38);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
    *(undefined1 *)(param_1 + 0x38) = uVar2;
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar4 >> 5 & 1) != 0) {
    uVar2 = *(undefined1 *)(param_2 + 0x39);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
    *(undefined1 *)(param_1 + 0x39) = uVar2;
  }
LAB_00853174:
  uVar5 = *(ulong *)(param_2 + 8);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_009bb7d0((ulong *)(param_1 + 8));
    uVar5 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffe;
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0080f460();
  }
  else {
    uVar5 = uVar5 & 0xfffffffffffffffe;
  }
  FUN_0080f7b0(uVar6,uVar5);
  return;
}


