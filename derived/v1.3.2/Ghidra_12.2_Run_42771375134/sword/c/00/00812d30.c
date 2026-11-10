/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00812d30; name: FUN_00812d30
 */


void FUN_00812d30(long *param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_98 [48];
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  
  lVar5 = (**(code **)(*param_1 + 0xb8))();
  plVar6 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  iVar1 = *(int *)(param_3 + 0x10);
  iVar2 = *(int *)(param_3 + 0x14);
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  (**(code **)(*plVar6 + 0x80))(plVar6,param_1,&local_68);
  if (local_60 != local_68) {
    uVar8 = 0;
    do {
      FUN_00812ea0(*(undefined8 *)((long)local_68 + uVar8 * 8),param_1,param_3);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)((long)local_60 - (long)local_68 >> 3));
  }
  cVar3 = *(char *)(*(long *)(lVar5 + 0x20) + 0x50);
  uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,param_1);
  if (cVar3 == '\0') {
    FUN_00810910(uVar7,param_3);
    iVar4 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10);
  }
  else {
    FUN_00811040();
    iVar4 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10);
  }
  if (iVar4 != (iVar2 + param_2) - iVar1) {
    FUN_00801270(auStack_98,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format.cc"
                 ,0x329);
    uVar7 = FUN_00800f30(auStack_98,"CHECK failed: (output->ByteCount()) == (expected_endpoint): ");
    uVar7 = FUN_00800f30(uVar7,
                         ": Protocol message serialized to a size different from what was originally expected.  Perhaps it was modified by another thread during serialization?"
                        );
    FUN_00800fa0(auStack_48,uVar7);
    FUN_00801290(auStack_98);
  }
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  return;
}


