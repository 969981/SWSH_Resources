/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040bb10; name: FUN_0040bb10
 */


void FUN_0040bb10(long param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint local_7c;
  undefined1 auStack_78 [40];
  uint local_48;
  uint local_44;
  
  if (param_4 != 0) {
    FUN_0040b3b0(param_1,param_2,auStack_78);
    if ((param_4 >> 0xd & 1) != 0) {
      FUN_0040eaf0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),param_5,auStack_78,param_2,
                   param_3);
    }
    if (((0 < param_3 + param_2) && (param_2 < 1)) && ((param_4 >> 10 & 1) != 0)) {
      FUN_0048f680(*(undefined8 *)PTR_DAT_02712ad0,param_5,0x400,auStack_78);
    }
    FUN_0040ebc0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),param_2,param_3,&local_44,
                 &local_48,&local_7c);
    puVar1 = PTR_DAT_02712ad0;
    if (((param_4 >> 9 & 1) != 0) && (local_44 != 0)) {
      uVar3 = 0;
      do {
        FUN_0048f680(*(undefined8 *)puVar1,param_5,0x200,auStack_78);
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_44);
    }
    puVar1 = PTR_DAT_02712ad0;
    if (((param_4 >> 8 & 1) != 0) && (local_48 != 0)) {
      uVar3 = 0;
      do {
        FUN_0048f680(*(undefined8 *)puVar1,param_5,0x100,auStack_78);
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_48);
    }
    puVar1 = PTR_DAT_02712ad0;
    if (((param_4 >> 0xc & 1) != 0) && (local_7c != 0)) {
      uVar3 = 0;
      do {
        FUN_0048f680(*(undefined8 *)puVar1,param_5,0x1000,auStack_78);
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_7c);
    }
    if (((param_4 >> 0xb & 1) != 0) &&
       (iVar2 = FUN_0040ead0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78)),
       param_2 <= iVar2 && iVar2 < param_3 + param_2)) {
      FUN_0048f680(*(undefined8 *)PTR_DAT_02712ad0,param_5,0x800,auStack_78);
    }
  }
  return;
}


