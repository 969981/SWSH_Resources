/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00846a20; name: FUN_00846a20
 */


void FUN_00846a20(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined *local_48;
  undefined *puStack_40;
  undefined1 local_38;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x752);
  }
  FUN_0081cef0(param_1 + 0x28,param_2 + 0x28);
  FUN_0081a4e0(param_1 + 0x40,param_2 + 0x40);
  FUN_0081a4e0(param_1 + 0x50,param_2 + 0x50);
  FUN_008491c0(param_1 + 0x60,param_2 + 0x60);
  FUN_008492e0(param_1 + 0x78,param_2 + 0x78);
  FUN_00849400(param_1 + 0x90,param_2 + 0x90);
  FUN_00849520(param_1 + 0xa8,param_2 + 0xa8);
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0xff) != 0) {
    if ((uVar3 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      FUN_00860e40(param_1 + 0x18,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x18));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      FUN_00860e40(param_1 + 0x20,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x20));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
  }
  if ((uVar3 & 0x1fe00) == 0) goto LAB_00846bb8;
  if ((uVar3 >> 9 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0xc0);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
    if (plVar6 == (long *)0x0) {
      plVar6 = operator_new(0x88);
      *plVar6 = (long)(PTR_DAT_027172a0 + 0x10);
      FUN_00825430(plVar6 + 1);
      plVar6[5] = 0;
      plVar6[0xf] = 0;
      puVar1 = PTR_DAT_02716d70;
      plVar6[0xd] = 0;
      plVar6[0xe] = 0;
      if (*(long *)puVar1 != 2) {
        local_38 = 0;
        local_48 = PTR_DAT_02716670 + 0x10;
        puStack_40 = PTR_LAB_02716d78;
        FUN_00801c10(PTR_DAT_02716d70,&local_48);
        FUN_00801390(&local_48);
      }
      plVar6[6] = 0;
      lVar2 = *(long *)PTR_DAT_02716d10;
      *(undefined4 *)(plVar6 + 0x10) = 0;
      plVar6[7] = lVar2;
      plVar6[8] = lVar2;
      plVar6[9] = 0x100000000;
      plVar6[10] = lVar2;
      plVar6[0xb] = lVar2;
      plVar6[0xc] = lVar2;
      *(long **)(param_1 + 0xc0) = plVar6;
      lVar2 = *(long *)(param_2 + 0xc0);
    }
    else {
      lVar2 = *(long *)(param_2 + 0xc0);
    }
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)PTR_DAT_02716e38 + 0xc0);
    }
    FUN_00849640(plVar6,lVar2);
    uVar3 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar3 >> 10 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 200);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
    if (plVar6 == (long *)0x0) {
      plVar6 = operator_new(0x30);
      puVar1 = PTR_DAT_027172f0;
      plVar6[4] = 0;
      plVar6[5] = 0;
      plVar6[2] = 0;
      plVar6[3] = 0;
      *plVar6 = (long)(puVar1 + 0x10);
      plVar6[1] = 0;
      *(long **)(param_1 + 200) = plVar6;
      plVar7 = *(long **)(param_2 + 200);
      if (plVar7 != (long *)0x0) goto LAB_00846b50;
LAB_00846cdc:
      plVar7 = *(long **)(*(long *)PTR_DAT_02716e38 + 200);
      if (plVar7 == plVar6) {
LAB_00846cf4:
                    /* WARNING: Subroutine does not return */
        FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                     ,0x38c0);
      }
    }
    else {
      plVar7 = *(long **)(param_2 + 200);
      if (plVar7 == (long *)0x0) goto LAB_00846cdc;
LAB_00846b50:
      if (plVar7 == plVar6) goto LAB_00846cf4;
    }
    FUN_0085e470(plVar6 + 3,plVar7 + 3);
    uVar4 = plVar7[1];
    if ((uVar4 & 1) != 0) {
      uVar5 = plVar6[1];
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_009bb7d0(plVar6 + 1);
        uVar4 = plVar7[1];
        if ((uVar4 & 1) == 0) goto LAB_00846b7c;
LAB_00846d34:
        uVar4 = uVar4 & 0xfffffffffffffffe;
      }
      else {
        uVar5 = uVar5 & 0xfffffffffffffffe;
        if ((uVar4 & 1) != 0) goto LAB_00846d34;
LAB_00846b7c:
        uVar4 = FUN_0080f460();
      }
      FUN_0080f7b0(uVar5,uVar4);
    }
  }
  if ((*(byte *)(param_2 + 0x11) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800;
    FUN_00860e40(param_1 + 0xd0,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0xd0));
  }
LAB_00846bb8:
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


