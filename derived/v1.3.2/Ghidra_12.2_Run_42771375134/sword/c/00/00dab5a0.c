/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab5a0; name: FUN_00dab5a0
 */


void FUN_00dab5a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte *param_5,byte param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  
  param_5[0x840] = 1;
  *param_5 = param_6 & 1;
  *(undefined4 *)(param_5 + 4) = param_7;
  *(undefined4 *)(param_5 + 0x10) = param_1;
  *(undefined4 *)(param_5 + 0x30) = param_2;
  *(undefined4 *)(param_5 + 8) = param_3;
  *(undefined4 *)(param_5 + 0xc) = param_4;
  *(undefined8 *)(param_5 + 0x28) = param_8[1];
  *(undefined8 *)(param_5 + 0x20) = *param_8;
  *(undefined8 *)(param_5 + 0x858) = param_8[1];
  *(undefined8 *)(param_5 + 0x850) = *param_8;
  *(undefined8 *)(param_5 + 0x868) = param_8[3];
  *(undefined8 *)(param_5 + 0x860) = param_8[2];
  uVar1 = param_8[5];
  *(undefined8 *)(param_5 + 0x870) = param_8[4];
  *(undefined8 *)(param_5 + 0x878) = uVar1;
  uVar1 = param_8[6];
  *(undefined8 *)(param_5 + 0x888) = param_8[7];
  *(undefined8 *)(param_5 + 0x880) = uVar1;
  uVar1 = param_8[8];
  *(undefined8 *)(param_5 + 0x898) = param_8[9];
  *(undefined8 *)(param_5 + 0x890) = uVar1;
                    /* WARNING: Subroutine does not return */
  memset(param_5 + 0x40,0,0x800);
}


