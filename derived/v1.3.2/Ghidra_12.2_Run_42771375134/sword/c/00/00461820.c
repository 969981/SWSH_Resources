/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00461820; name: FUN_00461820
 */


void FUN_00461820(long param_1,long *param_2)

{
  long *__src;
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 local_70;
  long lStack_68;
  long local_60;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_02712b50;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    __src = param_2 + 2;
    if (*(int *)(lVar4 + 0x58) == 0) {
      memcpy((void *)(param_1 + 0x18),__src,0x30);
    }
    else {
      puVar6 = *(undefined4 **)(lVar4 + 0x50);
      do {
        FUN_0049b200(*(undefined8 *)puVar1,param_1,*puVar6,*(undefined1 *)(puVar6 + 1),
                     *(undefined1 *)((long)puVar6 + 5),*(undefined2 *)((long)puVar6 + 6),puVar6[2],
                     puVar6[7],*(undefined8 *)(puVar6 + 4),puVar6[6],__src,1,1);
        puVar6 = puVar6 + 8;
      } while (puVar6 != (undefined4 *)
                         (*(long *)(lVar4 + 0x50) + (ulong)*(uint *)(lVar4 + 0x58) * 0x20));
      lVar4 = *(long *)(param_1 + 0x10);
      memcpy((void *)(param_1 + 0x18),__src,0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    local_58 = 1;
    local_70 = 0;
    local_90 = 0xff00;
    local_98 = 0;
    local_78 = 0x100000000;
    local_88 = 0;
    uStack_80 = 0;
    local_60 = param_2[0x29];
    lStack_68 = param_1;
    (**(code **)(*param_2 + 0x48))(param_2,&local_98,1);
    puVar1 = PTR_DAT_02712dc0;
    local_78 = local_78 & 0xffffffff00000000;
    lVar4 = *(long *)(param_1 + 0x10);
    uVar2 = (ulong)*(uint *)(lVar4 + 0x58);
    if (*(uint *)(lVar4 + 0x58) != 0) {
      lVar3 = *(long *)(lVar4 + 0x50);
      lVar5 = lVar3;
      do {
        if (*(char *)(lVar5 + 4) == '\x02') {
          FUN_004779e0(*(undefined8 *)puVar1,&lStack_68,&local_98,param_2 + 10);
          lVar3 = *(long *)(lVar4 + 0x50);
          uVar2 = (ulong)*(uint *)(lVar4 + 0x58);
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != lVar3 + uVar2 * 0x20);
    }
  }
  return;
}


