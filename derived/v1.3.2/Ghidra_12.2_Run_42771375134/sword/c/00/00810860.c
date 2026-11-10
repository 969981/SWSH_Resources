/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00810860; name: FUN_00810860
 */


undefined8 FUN_00810860(ulong *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 < (byte *)param_1[1]) {
      uVar2 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_008108c4;
      *(uint *)(param_1 + 4) = uVar2;
      *param_1 = (ulong)(pbVar1 + 1);
    }
    else {
      uVar2 = 0;
LAB_008108c4:
      uVar2 = FUN_0080d8c0(param_1,uVar2);
      *(uint *)(param_1 + 4) = uVar2;
    }
    if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
      return 1;
    }
    uVar3 = FUN_00810550(param_1,uVar2,param_2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  } while( true );
}


