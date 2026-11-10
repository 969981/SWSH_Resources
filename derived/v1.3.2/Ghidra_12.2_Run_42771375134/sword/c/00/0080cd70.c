/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080cd70; name: FUN_0080cd70
 */


undefined8 FUN_0080cd70(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_60 [4];
  int local_5c;
  long local_58;
  undefined1 auStack_50 [48];
  
  if (((*(int *)((long)param_1 + 0x2c) < 1) && (*(int *)((long)param_1 + 0x1c) < 1)) &&
     ((int)param_1[3] != (int)param_1[5])) {
    if ((-1 < *(int *)((long)param_1 + 0x34)) && (*(int *)((long)param_1 + 0x34) <= (int)param_1[3])
       ) {
      FUN_00801270(auStack_50,1,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/coded_stream.cc"
                   ,0x25c);
      uVar3 = FUN_00800f30(auStack_50,
                           "Reading dangerously large protocol message.  If the message turns out to be larger than "
                          );
      uVar3 = FUN_00801220(uVar3,(int)param_1[6]);
      uVar3 = FUN_00800f30(uVar3,
                           " bytes, parsing will be halted for security reasons.  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in google/protobuf/io/coded_stream.h."
                          );
      FUN_00800fa0(&local_58,uVar3);
      FUN_00801290(auStack_50);
      *(undefined4 *)((long)param_1 + 0x34) = 0xfffffffe;
    }
    plVar6 = (long *)param_1[2];
    do {
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_58,&local_5c);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
    } while (local_5c == 0);
    *param_1 = local_58;
    param_1[1] = local_58 + local_5c;
    if (local_5c < 0) {
      FUN_00801270(auStack_50,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/coded_stream.cc"
                   ,0x26d);
      uVar3 = FUN_00800f30(auStack_50,"CHECK failed: (buffer_size) >= (0): ");
      FUN_00800fa0(auStack_60,uVar3);
      FUN_00801290(auStack_50);
    }
    iVar1 = (int)param_1[3];
    iVar2 = iVar1 - (0x7fffffff - local_5c);
    if (iVar2 == 0 || iVar1 < 0x7fffffff - local_5c) {
      local_5c = local_5c + iVar1;
      lVar5 = param_1[1];
    }
    else {
      lVar5 = param_1[1] - (long)iVar2;
      local_5c = 0x7fffffff;
      *(int *)((long)param_1 + 0x1c) = iVar2;
      param_1[1] = lVar5;
    }
    lVar5 = lVar5 + *(int *)((long)param_1 + 0x2c);
    iVar1 = (int)param_1[6];
    if ((int)param_1[5] <= (int)param_1[6]) {
      iVar1 = (int)param_1[5];
    }
    *(int *)(param_1 + 3) = local_5c;
    iVar2 = local_5c - iVar1;
    param_1[1] = lVar5;
    if (iVar2 == 0 || local_5c < iVar1) {
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      return 1;
    }
    *(int *)((long)param_1 + 0x2c) = iVar2;
    param_1[1] = lVar5 - iVar2;
    return 1;
  }
  if ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6]) {
    return 0;
  }
  if ((int)param_1[6] == (int)param_1[5]) {
    return 0;
  }
  FUN_00801270(auStack_50,2,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/coded_stream.cc"
               ,0xcf);
  uVar3 = FUN_00800f30(auStack_50,
                       "A protocol message was rejected because it was too big (more than ");
  uVar3 = FUN_00801220(uVar3,(int)param_1[6]);
  uVar3 = FUN_00800f30(uVar3,
                       " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in google/protobuf/io/coded_stream.h."
                      );
  FUN_00800fa0(&local_58,uVar3);
  FUN_00801290(auStack_50);
  return 0;
}


