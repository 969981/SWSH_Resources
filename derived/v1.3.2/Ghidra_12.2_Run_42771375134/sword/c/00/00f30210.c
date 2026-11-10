/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f30210; name: FUN_00f30210
 */


long FUN_00f30210(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  uVar1 = FUN_00e84680(0,0,0,0,0,0,0x3f800000,0x3f800000,*(undefined8 *)(param_1 + 0x78),0,0,
                       param_2[2]);
  uVar2 = FUN_00e85210(0,0,0,0,0,0,0,0,*(undefined8 *)(param_1 + 0x78),0);
  uVar6 = 0;
  uVar3 = FUN_00e85210(0,0,0,*(undefined4 *)(param_2 + 3),0,0,0,0,*(undefined8 *)(param_1 + 0x78),1)
  ;
  uVar4 = FUN_00e853e0(*(undefined8 *)(param_1 + 0x78),uVar1,*param_2,param_2[1],0,uVar3,0,0,uVar2,
                       uVar6);
  lVar5 = *(long *)(param_1 + 0x78);
  return (*(long *)(lVar5 + 0x30) +
         (ulong)(uint)((*(int *)(lVar5 + 0x20) - (int)*(long *)(lVar5 + 0x30)) +
                      *(int *)(lVar5 + 0x28))) - (uVar4 & 0xffffffff);
}


