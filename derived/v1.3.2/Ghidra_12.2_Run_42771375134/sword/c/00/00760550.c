/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00760550; name: FUN_00760550
 */


void FUN_00760550(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_70 [2];
  char *local_68;
  char *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 != 0) {
    uVar1 = FUN_0075f190(param_2);
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
    lVar2 = FUN_0075f240();
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) - lVar2;
    FUN_0075ffc0(param_1,uVar1);
    if (*(char *)(param_1 + 0x68) != '\0') {
      local_70[0] = 0xa3;
      local_68 = 
      "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflib3/src/mem/internal/tlsf_pool.cpp";
      local_60 = "deactivate";
      local_58 = &DAT_01d38550;
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 1;
      local_48 = 0;
      nn::diag::detail::LogImpl
                ((LogMetaData *)local_70,"[gfl::mem] %s deallocated. %zx\n",
                 *(undefined8 *)(param_1 + 0x60),param_2);
    }
  }
  return;
}


