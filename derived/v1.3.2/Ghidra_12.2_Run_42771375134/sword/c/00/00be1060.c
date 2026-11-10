/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be1060; name: FUN_00be1060
 */


undefined8 FUN_00be1060(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = (long)param_3 + 0x96;
  lVar3 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,0);
  if (lVar3 != 0) {
    FUN_00866390(*param_3,lVar3);
    *(undefined1 *)((long)param_3 + 0x14) = 0;
    *(undefined8 *)((long)param_3 + 0xc) = 0;
    uVar4 = FUN_0077d470(*param_2);
    FUN_0077d7e0(lVar1,uVar4,0xb);
  }
  lVar3 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,1);
  if (lVar3 != 0) {
    FUN_00866390(param_3[3],lVar3);
    *(undefined1 *)((long)param_3 + 0x2c) = 0;
    *(undefined8 *)((long)param_3 + 0x24) = 0;
    uVar4 = FUN_0077d470(*param_2);
    FUN_0077d7e0(lVar1,uVar4,0xb);
  }
  lVar3 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,2);
  if (lVar3 != 0) {
    FUN_00866390(param_3[6],lVar3);
    *(undefined1 *)((long)param_3 + 0x44) = 0;
    *(undefined8 *)((long)param_3 + 0x3c) = 0;
    uVar4 = FUN_0077d470(*param_2);
    FUN_0077d7e0(lVar1,uVar4,0xb);
  }
  lVar3 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,3);
  if (lVar3 != 0) {
    FUN_00866390(param_3[9],lVar3);
    *(undefined1 *)((long)param_3 + 0x5c) = 0;
    *(undefined8 *)((long)param_3 + 0x54) = 0;
    uVar4 = FUN_0077d470(*param_2);
    FUN_0077d7e0(lVar1,uVar4,0xb);
  }
  lVar3 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,4);
  if (lVar3 != 0) {
    FUN_00866390(param_3[0xc],lVar3);
    *(undefined1 *)((long)param_3 + 0x74) = 0;
    *(undefined8 *)((long)param_3 + 0x6c) = 0;
    uVar4 = FUN_0077d470(*param_2);
    FUN_0077d7e0(lVar1,uVar4,0xb);
  }
  lVar3 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,5);
  if (lVar3 != 0) {
    FUN_00866390(param_3[0xf],lVar3);
    *(undefined1 *)((long)param_3 + 0x8c) = 0;
    *(undefined8 *)((long)param_3 + 0x84) = 0;
    uVar4 = FUN_0077d470(*param_2);
    FUN_0077d7e0(lVar1,uVar4,0xb);
  }
  uVar4 = FUN_008d3750();
  uVar2 = FUN_008d3fc0(uVar4,0);
  *(undefined4 *)((long)param_3 + 0xb4) = uVar2;
  return 1;
}


