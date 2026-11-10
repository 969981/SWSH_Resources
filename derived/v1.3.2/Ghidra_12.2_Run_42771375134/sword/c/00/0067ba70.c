/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067ba70; name: FUN_0067ba70
 */


undefined8 FUN_0067ba70(long param_1,long *param_2,long *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_0067bde0();
  if ((param_4 & 1) == 0) {
    if (0 < param_3[0xe]) {
      (**(code **)(*param_2 + 0x90))(param_2,param_3[0xf],0);
      for (lVar1 = param_3[0x13];
          (lVar1 != 0 && (FUN_0067ba70(param_1,param_2,lVar1,0), *(long *)(lVar1 + 0x20) != 0));
          lVar1 = *(long *)(lVar1 + 0x20)) {
        (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(lVar1 + 0x68),0);
      }
    }
  }
  else {
    lVar1 = FUN_00683020(param_2,*(undefined8 *)(param_1 + 0x28),0);
    uVar2 = (**(code **)(*param_3 + 0x30))(param_3,param_1,param_2);
    if ((uVar2 & 1) == 0) {
      FUN_005c9140(param_1 + 0x130,
                   "SiIOBinaryArchive::WriteChunkHandler --> Failed to write chunk header");
      return 0;
    }
    lVar3 = (**(code **)(*param_2 + 0x88))(param_2);
    param_3[10] = lVar3 - lVar1;
    if (0 < lVar3 - lVar1) {
      param_3[0xc] = lVar1;
    }
    if (0 < param_3[0x15]) {
      lVar4 = FUN_00683020(param_2,*(undefined8 *)(param_1 + 0x28),0);
      lVar3 = param_3[0x13];
      param_3[0xf] = lVar4;
      for (; (lVar3 != 0 && (FUN_0067ba70(param_1,param_2,lVar3,1), *(long *)(lVar3 + 0x20) != 0));
          lVar3 = *(long *)(lVar3 + 0x20)) {
        uVar5 = FUN_00683020(param_2,*(undefined8 *)(param_1 + 0x28),0);
        *(undefined8 *)(lVar3 + 0x68) = uVar5;
      }
    }
    lVar3 = (**(code **)(*param_2 + 0x88))(param_2);
    param_3[0xb] = lVar3 - lVar1;
  }
  return 1;
}


