/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e4e40; name: FUN_009e4e40
 */


void FUN_009e4e40(long param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x6e) = *(undefined2 *)(param_2 + 6);
  uVar3 = FUN_008fa9d0(*(undefined8 *)(param_1 + 8),*param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar2 = FUN_008df3f0(uVar2,*param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined1 *)(param_1 + 0x6c) = param_2[8];
  *(bool *)(param_1 + 0x68) = param_2[1] != '\0';
  *(bool *)(param_1 + 0x69) = param_2[2] != '\0';
  *(bool *)(param_1 + 0x6a) = param_2[3] != '\0';
  cVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x8c) = 0x6400000001;
  *(undefined8 *)(param_1 + 0x94) = 0x6400000001;
  *(undefined8 *)(param_1 + 0x9c) = 0x6400000001;
  *(undefined8 *)(param_1 + 0xa4) = 0x6400000001;
  *(undefined8 *)(param_1 + 0xac) = 0x6400000001;
  *(bool *)(param_1 + 0x6b) = cVar1 != '\0';
  return;
}


