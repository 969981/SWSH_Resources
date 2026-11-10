/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00851f40; name: FUN_00851f40
 */


void FUN_00851f40(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x1b96);
  }
  FUN_00852d00(param_1 + 0x20,param_2 + 0x20);
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar3 = (uint)bVar1;
  if (bVar1 != 0) {
    if ((bVar1 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      FUN_00860e40(param_1 + 0x18,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x18));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if (plVar6 == (long *)0x0) {
        plVar6 = operator_new(0x58);
        *plVar6 = (long)(PTR_DAT_027172d0 + 0x10);
        FUN_00825430(plVar6 + 1);
        *(undefined1 *)(plVar6 + 10) = 0;
        plVar6[8] = 0;
        plVar6[9] = 0;
        plVar6[5] = 0;
        plVar6[6] = 0;
        plVar6[7] = 0;
        *(long **)(param_1 + 0x38) = plVar6;
        lVar2 = *(long *)(param_2 + 0x38);
      }
      else {
        lVar2 = *(long *)(param_2 + 0x38);
      }
      if (lVar2 == 0) {
        lVar2 = *(long *)(*(long *)PTR_DAT_02716e50 + 0x38);
      }
      FUN_00852e20(plVar6,lVar2);
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


