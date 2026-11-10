/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e9420; name: FUN_007e9420
 */


undefined8 FUN_007e9420(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_3 == (undefined4 *)0x0) {
    FUN_00801270(auStack_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/stubs/logging.h"
                 ,0xa6);
    uVar2 = FUN_00800f30(auStack_60,"\'out_location\' must not be NULL");
    FUN_00800fa0(auStack_28,uVar2);
    FUN_00801290(auStack_60);
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  if (lVar3 != 0) {
    lVar3 = FUN_007e2550(*(undefined8 *)(param_1 + 0x98),param_2);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar3 + 0x30) - 3U < 2) {
      *param_3 = *(undefined4 *)(*(long *)(lVar3 + 0x38) + 8);
      param_3[2] = *(undefined4 *)(*(long *)(lVar3 + 0x38) + 0xc);
      lVar1 = 0;
      if (*(int *)(lVar3 + 0x30) != 3) {
        lVar1 = 8;
      }
      param_3[1] = *(undefined4 *)(*(long *)(lVar3 + 0x38) + lVar1 + 8);
      param_3[3] = *(undefined4 *)(*(long *)(lVar3 + 0x38) + (long)*(int *)(lVar3 + 0x30) * 4 + 4);
      std::string::operator=((string *)(param_3 + 4),*(string **)(lVar3 + 0x48));
      std::string::operator=((string *)(param_3 + 10),*(string **)(lVar3 + 0x50));
      lVar1 = 0;
      if (*(long *)(lVar3 + 0x68) != 0) {
        lVar1 = *(long *)(lVar3 + 0x68) + 8;
      }
      FUN_007e9560(param_3 + 0x10,lVar1,lVar1 + (long)*(int *)(lVar3 + 0x60) * 8);
      return 1;
    }
  }
  return 0;
}


