#include <linux/hdreg.h>
#include <linux/blkdev.h>
#include <linux/netdevice.h>
#include <linux/moduleparam.h>
#include <net/net_namespace.h>
#include <asm/unaligned.h>

int
testfn(struct net_device *ifp)
{
	return ifp->nd_net == &init_net;
}
