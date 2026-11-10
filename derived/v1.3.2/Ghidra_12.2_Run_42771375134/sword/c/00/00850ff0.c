/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00850ff0; name: FUN_00850ff0
 */


void FUN_00850ff0(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x19b4);
  }
  bVar2 = *(byte *)(param_2 + 0x10);
  uVar4 = (uint)bVar2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) == 0) {
      if ((bVar2 >> 1 & 1) != 0) {
LAB_00851068:
        uVar1 = *(undefined4 *)(param_2 + 0x28);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        *(undefined4 *)(param_1 + 0x28) = uVar1;
        uVar4 = *(uint *)(param_2 + 0x10);
      }
    }
    else {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      FUN_00860e40(param_1 + 0x18,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x18));
      uVar4 = *(uint *)(param_2 + 0x10);
      if ((uVar4 >> 1 & 1) != 0) goto LAB_00851068;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      plVar7 = *(long **)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if (plVar7 == (long *)0x0) {
        plVar7 = operator_new(0x58);
        *plVar7 = (long)(PTR_DAT_027172c8 + 0x10);
        FUN_00825430(plVar7 + 1);
        *(undefined1 *)(plVar7 + 10) = 0;
        plVar7[8] = 0;
        plVar7[9] = 0;
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        *(long **)(param_1 + 0x20) = plVar7;
        lVar3 = *(long *)(param_2 + 0x20);
      }
      else {
        lVar3 = *(long *)(param_2 + 0x20);
      }
      if (lVar3 == 0) {
        FUN_00851c90(plVar7,*(undefined8 *)(*(long *)PTR_DAT_02716e68 + 0x20));
        uVar5 = *(ulong *)(param_2 + 8);
      }
      else {
        FUN_00851c90(plVar7);
        uVar5 = *(ulong *)(param_2 + 8);
      }
      goto joined_r0x00851134;
    }
  }
  uVar5 = *(ulong *)(param_2 + 8);
joined_r0x00851134:
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


