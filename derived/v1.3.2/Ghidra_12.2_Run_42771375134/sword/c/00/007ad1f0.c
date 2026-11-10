/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ad1f0; name: FUN_007ad1f0
 */


undefined8 FUN_007ad1f0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  int local_48;
  undefined4 uStack_44;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_01852540(&local_48);
    puVar1 = PTR_LAB_02716800;
    if (local_48 < 0) {
      puVar1 = (undefined *)0x0;
    }
    if (((puVar1 != (undefined *)0x0) && (*(char *)(param_1 + 0x90) != '\0')) &&
       (*(char *)(param_1 + 0x93) == '\0')) {
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined1 *)(param_1 + 0x93) = 1;
      puVar3 = (undefined8 *)FUN_017cd750(0xc0);
      if (puVar3 == (undefined8 *)0x0) {
        uVar4 = FUN_017af2c0(*(undefined8 *)(param_1 + 0xb0),0);
        puVar2 = (undefined8 *)0x0;
      }
      else {
        FUN_01847ff0(puVar3,0);
        FUN_017d2ee0(&local_48,param_2);
        puVar3[0x11] = CONCAT44(uStack_44,local_48);
        uVar4 = FUN_017af2c0(*(undefined8 *)(param_1 + 0xb0),puVar3);
        puVar2 = puVar3;
      }
      if ((uVar4 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined1 *)(param_1 + 0x93) = 0;
        (**(code **)*puVar2)(puVar2);
        FUN_017cd7a0(puVar3);
        return 0;
      }
      *(undefined8 **)(param_1 + 0x98) = puVar3;
      plVar5 = (long *)FUN_017cd750(0x28);
      if (plVar5 == (long *)0x0) {
        return 1;
      }
      *plVar5 = (long)(PTR_DAT_027167f0 + 0x10);
      plVar5[1] = param_1;
      puVar1 = PTR_LAB_02716828;
      plVar5[4] = (long)puVar2;
      plVar5[2] = (long)puVar1;
      plVar5[3] = 0;
      FUN_017dee40(puVar2,2);
      FUN_017de4d0(puVar2,plVar5,0,1);
      return 1;
    }
  }
  return 0;
}


